# C playground

a sample c project

## Usage

```sh
gcc main.c **/*.c && ./a.out
```

### Watch

* install pywatch `pip install pywatch`

```sh
pywatch "gcc main.c **/*.c && ./a.out" **/*.c
```

## Goals

this playground should cover following topics:

* how to include files
* unit testing
* dependency management

## References

* [Blogpost Testing][testing]: Testdriven development in C with MinUnit
* [MinUnit][minunit]: Minimal unittesting
* [Conan][conan]: C dependency management
* [CMocka][cmocka]: Unittesting

[conan]: https://github.com/conan-io/conan
[minunit]: http://www.jera.com/techinfo/jtns/jtn002.html
[testing]: http://eradman.com/posts/tdd-in-c.html
[cmocka]: https://cmocka.org/
