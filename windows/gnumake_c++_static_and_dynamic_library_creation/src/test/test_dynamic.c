#include <windows.h>
#include <stdio.h>
#include <conio.h>

typedef int (*FromDll666)();

HINSTANCE h;

int main(int argc, char ** argv) {
  FromDll666 fun;
  h = LoadLibrary(TEXT("..\\dynamic\\libfun.dll.0.0.1"));
  if (h) {
      fun = (FromDll666)GetProcAddress(h, "fun");
      if (fun) {
          printf("\n==============\nRUNNING DYNAMIC... RESULT: %d\n==============\n", fun());
      }
      FreeLibrary(h);
  }
  return 0;
}
