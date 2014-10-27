//-------- DllExports.h --------//
#ifndef DLLEXPORTS_H
#define DLLEXPORTS_H

#include <Windows.h>

#ifdef FOO_EXPORTS
#define FOO_API __declspec (dllexport)
#else
#define FOO_API __declspec (dllimport)
#endif

#include "FooClass.h"

extern "C" FOO_API void* CreateFooClassInstance();

#endif	// DLLEXPORTS_H
