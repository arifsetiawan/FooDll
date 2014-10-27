//-------- DllMain.cpp --------//
#include "DllExports.h"

int WINAPI DllEntryPoint(HINSTANCE hinst, unsigned long reason, void*)
{
	return 1;
}

FOO_API void* CreateFooClassInstance()
{
	return static_cast< void* > (new FooClass);
}