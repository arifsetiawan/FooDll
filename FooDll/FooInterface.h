#ifndef FOOINTERFACE_H
#define FOOINTERFACE_H

class IFoo
{
public:
	virtual int GetNumber() = 0;
	virtual void SetNumber( int & ) =0;
};

#endif	// FOOINTERFACE_H