# C playground

a sample c project

## Requirements

* cmake
* make
* conan `pip install conan`

## Usage

```sh
conan install --build missing
cmake .
make
bin/main
```

## Goals

this playground should cover following topics:

* Makefile
* how to include files
* unit testing
* dependency management

## References

* [Blogpost Testing][testing]: Testdriven development in C with MinUnit
* [MinUnit][minunit]: Minimal unittesting
* [Conan][conan]: C dependency management
* [CMocka][cmocka]: Unittesting
* [CMake Tutorial][cmake_tut]: CMake beginner's guide
* [Conan guide][conan_gs]: Conan getting started

[conan_gs]: http://docs.conan.io/en/latest/getting_started.html
[conan]: https://github.com/conan-io/conan
[minunit]: http://www.jera.com/techinfo/jtns/jtn002.html
[testing]: http://eradman.com/posts/tdd-in-c.html
[cmocka]: https://cmocka.org/
[cmake_tut]: https://cmake.org/cmake-tutorial/
