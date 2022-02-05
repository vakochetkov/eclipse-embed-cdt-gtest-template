###GoogleTest setup for Eclipse Embedded CDT

*GoogleTest v1.11.0 libs are pre-compiled using Cygwin GCC 11.2.0, you can rebuild them yourself to recent versions*

* Create build configuration for test runner using Cygwin or MinGW 32-bit toolchain

* Add `test/include` to **Includes** in Paths and Symbols

* Add `test/lib` to **Lib Paths** in Paths and Symbols

* Add `gtest`and `gmock` to **Libs** in Paths and Symbols

* Build test configuration with `test_platform.cpp` (checks platform is <u>exactly</u> 32-bit)

* Create **C/C++ Unit** debug configuration (GDB may not work with version newer than 10) and run it

* Check results in C/C++ Unit view (Window -> Show View -> Other -> C/C++)

* Add your own tests in `test` directory


