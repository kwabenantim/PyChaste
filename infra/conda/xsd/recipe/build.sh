#!/bin/bash

make \
  CC="$CC" \
  CXX="$CXX" \
  AR="$AR" \
  RANLIB="$RANLIB" \
  CFLAGS="$CFLAGS" \
  CPPFLAGS="$CPPFLAGS" \
  CXXFLAGS="$CXXFLAGS \
  -std=c++14" \
  LDFLAGS="$LDFLAGS" \
  -j $CPU_COUNT \
  verbose=1

make test

make install_prefix="$PREFIX" install
