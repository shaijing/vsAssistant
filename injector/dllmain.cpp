// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include "dllmain.h"

BOOL APIENTRY DllMain( HMODULE hModule,/*当前dll模块句柄*/
                       DWORD  ul_reason_for_call,/*调用原因*/
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:/*被进程加载的时候*/
        injected();
        break;
    case DLL_THREAD_ATTACH:/*当进程有新的线程的时候*/
        break;
    case DLL_THREAD_DETACH:/*当进程有一个线程关闭的时候*/
        break;
    case DLL_PROCESS_DETACH:/*被进程卸载的时候*/
        break;
    }
    return TRUE;
}
void injected() {
    printf("成功注入\n");
}

int f(){
    return 12;
}
