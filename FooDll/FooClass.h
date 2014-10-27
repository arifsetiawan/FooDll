#ifndef FOOCLASS_H
#define FOOCLASS_H

#include "FooInterface.h"

class FooClass :public IFoo
{
public:
	FooClass();
	int GetNumber();
	void SetNumber( int & );
private:
	int number;
};

#endif 	// FOOCLASS_H
