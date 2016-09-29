#include <windows.h>
#include <stdio.h>
#include <conio.h>

typedef void (*HelloWorld)();

HINSTANCE h;

int main(int argc, char ** argv) {
  HelloWorld fun;
  h = LoadLibrary(TEXT(".\\p3.dll"));
  if (h) {
      fun = (HelloWorld)GetProcAddress(h, "HelloWorld");
      if (fun) {
          fun();
      }
      FreeLibrary(h);
  }
  return 0;
}

