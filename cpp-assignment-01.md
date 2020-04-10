# C++ Assignment 01

## C++ Project structure

```
cpp-assignment01
|- CMakeLists.txt
|- include
|  |- groupA.h
|- src
|  |- main.cpp
|  |- groupA
|  |  |- groupA-file1.cpp
|  |  |- groupA-file2.cpp
|  |  |- groupA-internal.h
```

## Requirements

| ID  | Description                                                                                              |
| --- | -------------------------------------------------------------------------------------------------------- |
| 1   | `main` function is located in `main.cpp`                                                                 |
| 2   | `main` function call `doTaskA` function provided in `groupA-file1.cpp`                                   |
| 3   | `doTaskA` function print out 3 lines: **"doTaskA 1"** -> **"doTaskA 3"** using loop                      |
|     | and then call another function `doSubTaskA` in `groupA-file2.cpp`                                        |
| 4   | `doSubTaskA` function print out 5 lines: **"doSubTaskA 1"** -> **"doSubTaskA 5"** using loop             |
| 5   | `main` function can not call `doSubTaskA` function (`doSubTaskA` in `main` should lead to compile error) |
| 6   | Build the project with VS Code (required plugins `C/C++`, `CMake` and `CMake Tools` installed)           |
