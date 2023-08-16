[![C/C++ CI](https://github.com/Daniel-Tanase/kclog/actions/workflows/c-cpp.yml/badge.svg?branch=master)](https://github.com/Daniel-Tanase/kclog/actions/workflows/c-cpp.yml)

```
  _        _
 | |      | |
 | | _____| | ___   __ _
 | |/ / __| |/ _ \ / _` |
 |   < (__| | (_) | (_| |
 |_|\_\___|_|\___/ \__, |
                    __/ |
                   |___/
```

#### Q: Are you tired of looking for logger libraries written in C?
#### A: Well, search no more, you just found the one you need! 🙃

This is an open-source C/C++ library that provides convenient and customizable
logging functionalities. The library is designed to facilitate effective
debugging, error reporting, and information gathering by providing context-specific
information for each logged message.

## Download and Install

To download and install the `kclog` library, follow these steps:

```
$ git clone https://github.com/Daniel-Tanase/kclog.git
$ cd kclog && make all
```

Yep, this is it! You can start using the library.

## Use the library

Because I believe that documenting a project is at least as important as writing
the project's code, I have created a very comprehensive wiki for this repository,
explaining in detail how to integrate your code with the `kclog` static
library.

So, head over to the [wiki](https://github.com/Daniel-Tanase/kclog/wiki)
to learn more!

## Testing

To compile the tests run `make test`. This command will also run all the tests.

If you want to run a single test, after compilation, all of the executables will
be located inside the `build/bin/test` directory. Simply run the executable with
the same name as the test file that you want to run.

e.g. `./build/bin/test/list`

## Find a bug?

If you have found an issue or would like to submit an improvement to this
project, please submit an issue using the issues tab above. If you want to
submit a PR (pull-request) with a fix, please reference the issue you created.

Please review the [contribution](https://github.com/Daniel-Tanase/kclog/blob/master/CONTRIBUTING.md)
rules and practices before submitting any PR.

## License

This project is licensed under the [MIT License](https://github.com/Daniel-Tanase/kclog/blob/master/LICENSE)

<div align="center"> --- </div>
<div align="center">Created with ❤️ by keepcoding and You!</div>
