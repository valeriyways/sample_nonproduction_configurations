#ifndef _DLL_H_
#define _DLL_H_

#define DLLEXPORT __declspec(dllexport)

#ifdef __cplusplus
extern "C" {
#endif

  DLLEXPORT void HelloWorld();

#ifdef __cplusplus
}
#endif

#endif
