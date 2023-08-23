# README

## Description

Just a minimal template for my home C projects.

## Building / usage

I'm testing with criterion and building with cmake... A full example would be:

```bash
# From root dir
$ mkdir -p build/Release build/Debug

# Build release
$ cd build/Release
$ cmake -DENABLE_TESTS=OFF -DCMAKE_BUILD_TYPE=Release ../..
$ cmake --build .

# Build Debug & run tests
$ cd ../Debug
$ cmake -DCMAKE_BUILD_TYPE=Debug ../.. # default is ENABLE_TESTS=ON
$ cmake --build .
$ ctest # run tests

# Running, from target builddir
$ ./c_template
```

## TODO

TODO ;-)

## Licence

MIT. See [LICENCE](LICENCE) file.
