#pragma once
#if defined INJECTOR_EXPORTS
#define INJECTOR_API __declspec(dllexport)
#else
#define INJECTOR_API __declspec(dllimport)
#endif
extern "C" class INJECTOR_API Test
{
	Test();
	~Test();
	int add(int a, int b);
};

