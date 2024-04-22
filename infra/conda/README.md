# PyChaste conda packages

The [pychaste](https://anaconda.org/pychaste) channel on the anaconda cloud
hosts the `chaste` conda package and required dependency packages for `vtk` and
`xsd`. Other dependencies such as `petsc` and `sundials` are installed from
[conda-forge](https://anaconda.org/conda-forge).

## How to build the conda packages

This directory contains build scripts for the conda packages on the
[pychaste](https://anaconda.org/pychaste) channel. Assuming
[mamba](https://mamba.readthedocs.io) and
[docker](https://docs.docker.com/get-docker/) have been installed, the conda
packages can be built with the instructions below.

### Building the Linux conda packages

The following lines launch a docker container to build the package.

A list of `yaml` files containing settings for package variants can be found in
the `variants` folder of each package. The variant name is the name of the file
without the `.yaml` extenstion. For example, one of the variants for the `vtk`
package is `linux_64_python3.8_cpython`.

The `parallel` argument optionally specifies the maximum number of processes to
use for the build.

```bash
cd /path/to/PyChaste/infra/conda/<package-name>/<package-version>

docker run -it --rm \
  -v $(pwd):/home/conda \
  -e HOST_USER_ID="$(id -u)" \
  quay.io/condaforge/linux-anvil-cos7-x86_64 \
  ./build-package.sh --variant=<package-variant> --parallel=4
```

After the build is complete, you can verify that the package has been created:

```bash
ls ./build_artifacts/linux-64
```

There should be a `<package-name>-<version>-<hash>.tar.bz2` file in the
directory.

To do a test installation of the freshly built package, you can install the
local package in a new conda environment. For example:

```bash
conda create -n py38-env python=3.8
conda activate py38-env
conda install -c ./build_artifacts <package-name>
```

You can start a python session to import and use the package. If you are happy
with the package, it can be uploaded to the anaconda cloud. This requires
creating an anaconda account and installing the anaconda client:

```bash
conda install anaconda-client
```

To login to the anaconda cloud and upload the package:

```bash
anaconda login
anaconda upload -u '<channel-name>' /path/to/package.tar.bz2
```

## Updating the conda package recipes

For each of the packages, the directory containing the build scripts roughly
follows this structure:

```
├── build-package.sh
├── recipe
│   ├── build.sh
│   └── meta.yaml
└── variants
    ├── <variant-01>.yaml
    ├── <variant-02>.yaml
    └── <variant-03>.yaml
```

- `build-package.sh`: This script sets up the environment for the build and then
  calls `conda mambabuild` to build the conda package.
- `recipe/build.sh`: This script is used by `conda mambabuild` to build the
  source code. Typically, this performs the "configure" and "make" steps. See
  the
  [conda-build docs](https://docs.conda.io/projects/conda-build/en/latest/resources/build-scripts.html)
  for more details on conda build scripts.
- `recipe/meta.yaml`: This contains metadata used by the `conda mambabuild`
  process, including build dependencies. For more information, see the
  [conda-build docs](https://docs.conda.io/projects/conda-build/en/latest/resources/define-metadata.html).
- `variants`: This contains metadata for different variants of the build. For
  example, a package might need to be built with different versions of Python,
  which may require specifying slightly different versions of pre-build
  dependencies from conda-forge. The metadata for the variant is merged with
  `recipe/meta.yaml` during the package build. For further information on build
  variants, see the [conda-build
  docs](https://docs.conda.io/projects/conda-build/en/stable/resources/variants.html).
