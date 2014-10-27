#include "FooClass.h"

FooClass::FooClass()
{
	number = 0;
}

int FooClass::GetNumber()
{
	return number;
}

void FooClass::SetNumber(int &arg)
{
	number = arg;
}