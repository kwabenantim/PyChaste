#!/bin/bash
set -xeo pipefail

# Show usage
usage() {
  echo 'Usage: '"$(basename "$0")"' --variant=name [--parallel=num]'
  echo 'Example:'
  echo 'docker run --rm -it quay.io/condaforge/linux-anvil-cos7-x86_64 /bin/bash'
  echo "$(basename "$0")"' --variant=linux_64 --parallel=4'
  exit 1
}

# Parse args
variant=
parallel=

for option; do
  case $option in
  --variant=*)
    variant=$(expr "x$option" : "x--variant=\(.*\)")
    ;;
  --parallel=*)
    parallel=$(expr "x$option" : "x--parallel=\(.*\)")
    ;;
  *)
    echo "Unknown option: $option" 1>&2
    exit 1
    ;;
  esac
done

if [ -z "${variant}" ]; then usage; fi

# Configure environment
export FEEDSTOCK_ROOT="$(pwd)"
export RECIPE_ROOT="${FEEDSTOCK_ROOT}/recipe"
export CONFIG_FILE="${FEEDSTOCK_ROOT}/variants/${variant}.yaml"
export CONDA_BLD_PATH="${FEEDSTOCK_ROOT}/build_artifacts"

export CPU_COUNT="${parallel:-$(nproc)}"

export PYTHONUNBUFFERED=1

# Configure conda build path
mkdir -p "${CONDA_BLD_PATH}"

cat >~/.condarc <<CONDARC
conda-build:
  root-dir: ${CONDA_BLD_PATH}
pkgs_dirs:
  - ${CONDA_BLD_PATH}/pkg_cache
  - /opt/conda/pkgs
CONDARC

# Install conda build tools
mamba install --update-specs --yes --quiet --channel conda-forge \
  conda-build pip boa liblief=0.11.5 conda-forge-ci-setup=3
mamba update --update-specs --yes --quiet --channel conda-forge \
  conda-build pip boa liblief=0.11.5 conda-forge-ci-setup=3

# Configure conda channels
conda config --add channels conda-forge
conda config --add channels pychaste
conda config --env --set show_channel_urls true
conda config --env --set auto_update_conda false
conda config --env --set add_pip_as_python_dependency false
conda config --env --append aggressive_update_packages ca-certificates
conda config --env --remove-key aggressive_update_packages
conda config --env --append aggressive_update_packages ca-certificates
conda config --env --append aggressive_update_packages certifi
conda config --env --set channel_priority strict

# Configure conda activation
mkdir -p "${CONDA_PREFIX}/etc/conda/activate.d"
cat >"${CONDA_PREFIX}"/etc/conda/activate.d/conda-forge-ci-setup-activate.sh <<CONDAACTIVATE
export CONDA_BLD_PATH='${CONDA_BLD_PATH}'
export CPU_COUNT='${CPU_COUNT:-}'
export PYTHONUNBUFFERED='1'
CONDAACTIVATE

# Show conda build configuration
cat "${CONFIG_FILE}"

conda info
conda config --env --show-sources
conda list --show-channel-urls

# Build conda package
conda mambabuild "${RECIPE_ROOT}" -m "${CONFIG_FILE}"
