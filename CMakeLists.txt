# Copyright (c) 2005-2024, University of Oxford.
# All rights reserved.
# 
# University of Oxford means the Chancellor, Masters and Scholars of the
# University of Oxford, having an administrative office at Wellington
# Square, Oxford OX1 2JD, UK.
# 
# This file is part of Chaste.
# 
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#  * Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#  * Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#  * Neither the name of the University of Oxford nor the names of its
#    contributors may be used to endorse or promote products derived from this
#    software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
# HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
# LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 

#========================================
# Setup PyChaste project
#========================================

# PyChaste needs the cell_based component (and its dependencies)
find_package(Chaste COMPONENTS cell_based)

# Do Chaste project preprocessing, which does something like:
#   add_custom_target(project_PyChaste)
#   set(Chaste_project_PyChaste_SOURCE_DIR ...)
#   set(Chaste_project_PyChaste_INCLUDE_DIRS ...)
#   include_directories("${Chaste_THIRD_PARTY_INCLUDE_DIRS}")
#   include_directories("${Chaste_project_PyChaste_INCLUDE_DIRS}")
#   include_directories("${Chaste_INCLUDE_DIRS}")
#   add_library(chaste_project_PyChaste ...)
#   target_link_libraries(chaste_project_PyChaste ...)
chaste_do_project(PyChaste)

# PyChaste needs the Python3 development libraries
find_package(Python3 REQUIRED COMPONENTS Interpreter Development)
target_link_libraries(Chaste_COMMON_DEPS INTERFACE Python3::Module Python3::Python)

# PyChaste needs some additional VTK libraries
if(VTK_MAJOR_VERSION LESS 7)
    find_package(VTK REQUIRED COMPONENTS
        vtkInteractionStyle
        vtkIOImage
        vtkIOMovie
        vtkRenderingAnnotation
        vtkRenderingCore
        vtkRenderingFreeType
        vtkRenderingOpenGL
        vtkWrappingPythonCore
    )
elseif(VTK_MAJOR_VERSION LESS 9)
    find_package(VTK REQUIRED COMPONENTS
        vtkFiltersProgrammable
        vtkFiltersVerdict
        vtkInteractionStyle
        vtkIOImage
        vtkIOMovie
        vtkRenderingAnnotation
        vtkRenderingCore
        vtkRenderingFreeType
        vtkRenderingOpenGL2
        vtkWrappingPythonCore
    )
else()
    find_package(VTK REQUIRED COMPONENTS
        FiltersProgrammable
        FiltersVerdict
        InteractionStyle
        IOImage
        IOMovie
        IOOggTheora
        RenderingAnnotation
        RenderingCore
        RenderingFreeType # needs Freetype::Freetype
        RenderingOpenGL2 # needs X11::X11 and GLEW::GLEW
        WrappingPythonCore # needs Python3::Module
    )
endif()

if (VTK_MAJOR_VERSION LESS 9)
    list(APPEND Chaste_INCLUDES "${VTK_INCLUDE_DIRS}")
    list(APPEND Chaste_project_PyChaste_INCLUDE_DIRS "${VTK_INCLUDE_DIRS}")
    list(APPEND Chaste_THIRD_PARTY_LIBRARIES "${VTK_LIBRARIES}")
else()
    target_link_libraries(Chaste_COMMON_DEPS INTERFACE ${VTK_LIBRARIES})
endif ()

#========================================
# Compiler options
#========================================
add_compile_options(-Wno-unused-local-typedefs)

if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
    # https://stackoverflow.com/questions/25365160/boostmultiprecisionfloat128-and-c11
    add_compile_options(-fext-numeric-literals)
endif()

#========================================
# PyChaste non-wrapper C++ code
#========================================

# Non-wrapper code locations
set(PYCHASTE_INCLUDE_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/src/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/cell_based/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/ode/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/tutorial/
    ${CMAKE_CURRENT_SOURCE_DIR}/src/visualization/)

# Non-wrapper code needs to be put in a separate shared library
set(PYCHASTE_SHARED_LIB
    "${CMAKE_CURRENT_BINARY_DIR}/libchaste_project_PyChaste${CMAKE_SHARED_LIBRARY_SUFFIX}")

#========================================
# Target for wrapper auto-generation
#========================================
add_custom_target(project_PyChaste_Python_Bindings)
add_custom_command(TARGET project_PyChaste_Python_Bindings
    COMMAND cppwg ${CMAKE_SOURCE_DIR}
        -w ${CMAKE_CURRENT_SOURCE_DIR}/dynamic/wrappers
        -p ${CMAKE_CURRENT_SOURCE_DIR}/dynamic/wrapper_generators/package_info.yaml
        -i ${PYCHASTE_INCLUDE_DIRS} ${Chaste_INCLUDE_DIRS} ${Chaste_THIRD_PARTY_INCLUDE_DIRS}
        --std c++17
)

#========================================
# Build python modules from wrappers
#========================================
include_directories(${PYCHASTE_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/dynamic/wrappers)
include_directories(${PYTHON3_INCLUDE_DIRS})

add_subdirectory(dynamic/pybind11)

# Copy python package structure to build directory, ignoring existing shared libraries
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/src/python/
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/python/
     PATTERN "*${CMAKE_SHARED_LIBRARY_SUFFIX}" EXCLUDE)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/test/python/
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/python/test/)

file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/doc/
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR}/python/doc/)

# List of modules to build into shared libraries
set (PYCHASTE_PYTHON_MODULES
        # Modules with auto-generated wrappers
        core
        ode
        pde
        mesh
        cell_based
        visualization
        tutorial
        # Modules with manual wrappers
        preload
        tutorial_manual)

# Locations to put each module library
set (PYCHASTE_PYTHON_MODULE_LOCATIONS
        # Modules with auto-generated wrappers
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/core/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/ode/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/pde/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/mesh/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/cell_based/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/visualization/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/tutorial/
        # Modules with manual wrappers
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/
        ${CMAKE_CURRENT_BINARY_DIR}/python/chaste/tutorial/)

# The module library name must be the same as the pybind11 module name
# defined in the main wrapper e.g. `dynamic/wrappers/ode/ode.main.cpp`
# defines a pybind11 module `_chaste_project_PyChaste_ode`. By convention,
# the name starts with an underscore. The usual 'lib' prefix is disabled.
set(PYCHASTE_PYTHON_MODULE_PREFIX "_chaste_project_PyChaste_")

# Create a shared library target for each module
list(LENGTH PYCHASTE_PYTHON_MODULES max_idx)
math(EXPR max_idx "${max_idx} - 1")

foreach(idx RANGE ${max_idx})
    list(GET PYCHASTE_PYTHON_MODULES ${idx} module)
    list(GET PYCHASTE_PYTHON_MODULE_LOCATIONS ${idx} module_dir)

    # Glob the module's wrapper code from the `dynamic` directory
    file(GLOB module_sources ${CMAKE_CURRENT_SOURCE_DIR}/dynamic/wrappers/${module}/*.cpp)

    set(module_library_name ${PYCHASTE_PYTHON_MODULE_PREFIX}${module})
    add_library(${module_library_name} SHARED ${module_sources})

    set_target_properties(${module_library_name}
        PROPERTIES
            LIBRARY_OUTPUT_DIRECTORY ${module_dir}
            PREFIX "${PYTHON_MODULE_PREFIX}"
            SUFFIX "${CMAKE_SHARED_LIBRARY_SUFFIX}")

    # The order here is important - pybind11 and python come first
    target_link_libraries(${module_library_name} 
        pybind11::module
        ${Python3_LIBRARIES}
        ${Chaste_THIRD_PARTY_LIBRARIES}
        Chaste_COMMON_DEPS
        ${Chaste_LIBRARIES}
        ${PYCHASTE_SHARED_LIB})

    add_dependencies(${module_library_name} chaste_project_PyChaste)
endforeach()

# Target for building all module shared libraries
add_custom_target(project_PyChaste_Python)
foreach(module IN LISTS PYCHASTE_PYTHON_MODULES)
    add_dependencies(project_PyChaste_Python ${PYCHASTE_PYTHON_MODULE_PREFIX}${module})
endforeach()
