# [Gnu Make][https://www.gnu.org/software/make/] is terrible, but ok for now :)
# [C & C++ Compiler]https://sourceforge.net/projects/tdm-gcc/ worked for me

# TO RUN:
# 1) set PATH=D:\TDM-GCC-32\bin;%PATH%
# 2) set PATH=D:\soft\GnuWin32\bin;%PATH%
# 3) cd gnumake_c++_static_and_dynamic_library_creation folder
# 4) make clean
# 5) make all
# 6) make clean

# comment ".SILENT" for more output

.SILENT:
.PHONY: all clean
.IGNORE: cleanbin cleanlibstatic cleanlibdynamic cleanobjects

all: clean compile_src compile_tests run_tests

cleanbin:
	rmdir /s /q bin

cleanlibstatic:
	rmdir /s /q static

cleanlibdynamic:
	rmdir /s /q dynamic

cleanobjects:
	rmdir /s /q objects

clean: cleanbin cleanlibstatic cleanlibdynamic cleanobjects

bin:
	mkdir bin

static:
	mkdir static

dynamic:
	mkdir dynamic

objects:
	mkdir objects

# Dependancy on "clean" and "bin" would have been added here
# if "clean" did not satisfy "bin" target by removing "bin" directory that is needed to store results
compile_src: compile_static compile_dynamic

lib_sources: src\main\libfun.c src\main\libfun.h

compile_static: static objects lib_sources
	gcc -o objects\libfun_static.o -c src\main\libfun.c
	ar -r static\libfun.a objects\libfun_static.o

# -Werror # <<< break compilation because "-fpic ignored (all code is position independent)"
# -soname,libfun.so.0,-rpath,../dynamic # <<< for linux
compile_dynamic: dynamic objects lib_sources
	gcc -c src\main\libfun.c -Wall -fpic -o objects\libfun_dynamic.o
	gcc -shared objects\libfun_dynamic.o -o dynamic\libfun.dll.0.0.1

compile_tests: compile_test_static compile_test_dynamic

compile_test_static: bin src\test\test_static.c
	gcc -o bin\test_static -Isrc\main src\test\test_static.c -Lstatic -lfun

compile_test_dynamic: bin src\test\test_dynamic.c
	gcc -o bin\test_dynamic -Wall src\test\test_dynamic.c

run_tests: run_test_static run_test_dynamic

run_test_static: bin\test_static.exe
	bin\test_static.exe

run_test_dynamic: bin\test_dynamic.exe dynamic\libfun.dll.0.0.1
	bin\test_dynamic.exe
