#pragma once
#if defined INJECTOR_EXPORTS
#define INJECTOR_API __declspec(dllexport)
#else
#define INJECTOR_API __declspec(dllimport)
#endif
extern "C" INJECTOR_API int var = 10;
extern "C" INJECTOR_API int f();
void injected();
