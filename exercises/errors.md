# Build Errors

For exercise #1, if you are unable to see the build errors (due to not having CMake), here's an example copy of the build errors you would have seen:

```
➜  build git:(main) cmake --build .
[ 25%] Building CXX object CMakeFiles/my-cmake-project.dir/src/calculator.cpp.o
[ 50%] Linking CXX executable my-cmake-project
[ 50%] Built target my-cmake-project
[ 75%] Building CXX object CMakeFiles/calculatortests.dir/src/test_main.cpp.o
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:7:24: error: call to non-static member function without an object argument
    assert(Calculator::add(1, 1) == 2);
           ~~~~~~~~~~~~^~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:8:24: error: call to non-static member function without an object argument
    assert(Calculator::add(1, -1) == 0);
           ~~~~~~~~~~~~^~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:9:24: error: call to non-static member function without an object argument
    assert(Calculator::add(1, 0) == 1);
           ~~~~~~~~~~~~^~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:12:24: error: call to non-static member function without an object argument
    assert(Calculator::subtract(5, 3) == 2);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:13:24: error: call to non-static member function without an object argument
    assert(Calculator::subtract(5, -3) == 8);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:14:24: error: call to non-static member function without an object argument
    assert(Calculator::subtract(5, 0) == 5);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:17:24: error: call to non-static member function without an object argument
    assert(Calculator::multiply(2, 3) == 6);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:18:24: error: call to non-static member function without an object argument
    assert(Calculator::multiply(2, -3) == -6);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:19:24: error: call to non-static member function without an object argument
    assert(Calculator::multiply(2, 0) == 0);
           ~~~~~~~~~~~~^~~~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:22:24: error: call to non-static member function without an object argument
    assert(Calculator::divide(6, 3) == 2);
           ~~~~~~~~~~~~^~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:23:24: error: call to non-static member function without an object argument
    assert(Calculator::divide(6, -3) == -2);
           ~~~~~~~~~~~~^~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
/Users/bxtp4p/temp/workshop/copilot-cpp-workshop/src/test_main.cpp:24:35: error: call to non-static member function without an object argument
    assert(std::isnan(Calculator::divide(6, 0)));
                      ~~~~~~~~~~~~^~~~~~
/Library/Developer/CommandLineTools/SDKs/MacOSX14.4.sdk/usr/include/assert.h:99:25: note: expanded from macro 'assert'
    (__builtin_expect(!(e), 0) ? __assert_rtn(__func__, __ASSERT_FILE_NAME, __LINE__, #e) : (void)0)
                        ^
12 errors generated.
make[2]: *** [CMakeFiles/calculatortests.dir/src/test_main.cpp.o] Error 1
make[1]: *** [CMakeFiles/calculatortests.dir/all] Error 2
make: *** [all] Error 2
```
