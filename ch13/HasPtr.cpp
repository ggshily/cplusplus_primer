#ifndef HASPTR_CPP
#define HASPTR_CPP

#include "HasPtr.h"

int main()
{
	int obj = 0;
	HasPtr ptr1(&obj, 42);
	HasPtr ptr2(ptr1);
}

#endif
