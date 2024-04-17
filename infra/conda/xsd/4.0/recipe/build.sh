#!/bin/bash

if [[ "$target_platform" == osx-* ]]; then
  # https://github.com/Homebrew/homebrew-core/blob/3e856f62/Formula/x/xsd.rb
  mv xsd/version xsd/version.txt
  mv libxsd-frontend/version libxsd-frontend/version.txt
  mv libcutl/version libcutl/version.txt
fi

make \
  CC="$CC" \
  CXX="$CXX" \
  AR="$AR" \
  RANLIB="$RANLIB" \
  CFLAGS="$CFLAGS" \
  CPPFLAGS="$CPPFLAGS" \
  CXXFLAGS="$CXXFLAGS -std=c++11" \
  LDFLAGS="$LDFLAGS" \
  -j $CPU_COUNT \
  verbose=1

make test

make install_prefix="$PREFIX" install
