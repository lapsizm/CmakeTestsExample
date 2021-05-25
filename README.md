
## Build
- cmake -H. -B_build -DCMAKE_INSTALL_PREFIX=_install -DBUILD_TESTS=ON
- cmake —build _build —target install

## Cpack
- cmake -H. -B_build -DCPACK_GENERATOR="TGZ"
- cmake --build _build --target package

## Test
- cmake —build _build —target test — ARGS=--verbose


[![Build Status](https://travis-ci.com/lapsizm/rk3.svg?branch=master)](https://travis-ci.com/lapsizm/rk3)
