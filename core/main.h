#pragma once
#include <windows.h>
#include <iostream>
#if defined MAIN_EXPORTS
#define MAIN_API __declspec(dllexport)
#else
#define MAIN_API __declspec(dllimport)
#endif