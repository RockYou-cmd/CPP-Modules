#ifndef iter_h
#define iter_h

#include <iostream>

template <typename t>

void iter(int *array, int len, void (*fptr)(t a))
{
	int i = 0;

	while(i < len)
		fptr(array[i++]);
}


#endif // !iter_h