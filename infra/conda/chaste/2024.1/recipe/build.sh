#!/bin/bash
set -ex

cd ${PREFIX}
mkdir build
cd build || exit

# Modify pip environment for chaste_codegen
export PIP_NO_DEPENDENCIES="False"
export PIP_NO_INDEX="False"

cmake \
  -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_LIBRARY_PATH="${PREFIX}/lib" \
  -DCMAKE_PREFIX_PATH="${PREFIX}" \
  -DCMAKE_INSTALL_PREFIX="${PREFIX}" \
  -DBUILD_SHARED_LIBS=ON \
  -DBOOST_ROOT="${PREFIX}" \
  -DHDF5_C_COMPILER_EXECUTABLE="${PREFIX}/bin/h5pcc" \
  -DPYTHON_EXECUTABLE=${PYTHON} \
  -DVTK_DIR=${PREFIX} \
  -DXERCESC_INCLUDE="${PREFIX}/include" \
  -DXERCESC_LIBRARY="${PREFIX}/lib/libxerces-c.so" \
  -DXSD_EXECUTABLE="${PREFIX}/bin/xsd" \
  $SRC_DIR

# Revert pip environment settings
export PIP_NO_DEPENDENCIES="True"
export PIP_NO_INDEX="True"

make chaste_project_PyChaste -j ${CPU_COUNT}
make project_PyChaste_Python -j ${CPU_COUNT}

cd projects/PyChaste/python
pip install . --prefix=${PREFIX}

# Cleanup
cd ${PREFIX}/build
rm -rf cell_based/CMakeFiles
rm -rf global/CMakeFiles
rm -rf io/CMakeFiles
rm -rf linalg/CMakeFiles
rm -rf mesh/CMakeFiles
rm -rf ode/CMakeFiles
rm -rf pde/CMakeFiles
rm -rf python
rm -rf projects/PyChaste/CMakeFiles
rm -rf projects/PyChaste/python

# The egg-info file is necessary because some packages
# need pkg_resources to be able to find chaste.
# See https://setuptools.readthedocs.io/en/latest/pkg_resources.html#workingset-objects

cat > $SP_DIR/chaste-$PKG_VERSION.egg-info <<FAKE_EGG
Metadata-Version: 2.1
Name: chaste
Version: $PKG_VERSION
Summary: Chaste is a general purpose simulation package for computational biology.
Platform: UNKNOWN
FAKE_EGG
