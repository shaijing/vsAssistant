#include "main.h"
int main(int argc, char** argv) {
	typedef int(*F)();


	//�ⲿ����DLL
	HMODULE dll = LoadLibrary("injector");
	if (!dll) {
		std::cout << "����DLLʧ��" << std::endl;
	}
	else {
		int var = *(int*)GetProcAddress(dll, "var");
		F f = (F)GetProcAddress(dll, "f");
		std::cout << var << std::endl;
		std::cout << (*f)() << std::endl;
	}

	return 0;
}