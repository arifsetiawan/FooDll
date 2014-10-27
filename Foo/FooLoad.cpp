#include "FooInterface.h"
#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

typedef void* (WINAPI *pvFunctv)();

int main(int argc, char* argv[])
{
	HINSTANCE hdll = NULL;
	IFoo* piFoo = NULL;
	//typedef void* (*pvFunctv)();
	pvFunctv CreateFoo;

	hdll = LoadLibrary("FooDll.dll");		// load the dll
	CreateFoo = (pvFunctv)(GetProcAddress( hdll, "CreateFooClassInstance" ) );

	piFoo = static_cast< IFoo* > ( CreateFoo() );	// get pointer to object
	
	int number = 8;
	piFoo->SetNumber(number);				// start using the object
	cout 	<< "Foo::number is epual to: "
		<< piFoo-> GetNumber()
		<< endl;

	cout	<< "Enter new value for Foo::number: ";
	int temp;
	cin	>> temp;
	piFoo-> SetNumber(temp);
	cout	<< "Foo::number is now: "
		<< piFoo->GetNumber()
		<< endl;
	//getch();
	//delete piFoo = NULL;				// delete the object
	delete piFoo;
	FreeLibrary(hdll);				// free the dll
}