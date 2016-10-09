# цель1: зависимость_цель1 зависимость_цель2
# <таб>команда1
# <таб>команда2
# цель2:...
# ...
# g++ - компилятор
# -o <выходной файл>
# -c - компилировать без линковки. Создаются .o объекты, которые не связаны друг с другом (нужно, чтобы твою библиотеку могли подключить).
# -I<папка> - уазать папку для включения в проект (#include <...>)
# -L<папка> - указать папку, где лежат бинарные/объектные файлы объектов .o .a .lib ...
# -l<файл без "lib" и без ".o"> - объект, который ты линкуешь. ???
# ar - ненужная утилита для создания промежуточных результатов (объединяет .o файлы в один .a)
# -r - полезная параметр
# rmdir - удалить папку в винде
# [Gnu Make][https://www.gnu.org/software/make/] is terrible, but ok for now :)
# [C & C++ Compiler]https://sourceforge.net/projects/tdm-g++/ worked for me

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
.IGNORE: cleanbin cleanlibstatic cleanobjects

all: clean compile_src compile_tests run_tests

cleanbin:
	rmdir /s /q bin

cleanlibstatic:
	rmdir /s /q static

cleanobjects:
	rmdir /s /q objects

clean: cleanbin cleanlibstatic cleanobjects

bin:
	mkdir bin

static:
	mkdir static

objects:
	mkdir objects

# Dependancy on "clean" and "bin" would have been added here
# if "clean" did not satisfy "bin" target by removing "bin" directory that is needed to store results
compile_src: static objects src\main\Array1D.cpp src\main\Array1D.h
	g++ -o objects\libArray1D.o -c src\main\Array1D.cpp
	ar -r static\libArray1D.a objects\libArray1D.o

compile_tests: bin src\test\main.cpp
	g++ -o bin\main.exe -Isrc\main src\test\main.cpp -Lstatic -lArray1D

run_tests: bin\main.exe
	bin\main.exe