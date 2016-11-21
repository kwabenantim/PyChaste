#!/bin/bash
set -e

./configure --prefix=$PREFIX
make -j$(getconf _NPROCESSORS_ONLN) SHLIB_LIBS="-ltinfo -L$LD_RUN_PATH"
make install
