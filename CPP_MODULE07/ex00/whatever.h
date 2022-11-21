#ifndef whatever_h
#define whatever_h

#include <iostream>

template <typename t> 

void swap(t &a, t &b)
{
	t tmp = a;
	a = b;
	b = tmp;
}

template <typename n> 

n min(n a, n b)
{
	if (a < b)
		return a;
	return b;
}

template <typename x> 

x max(x a, x b)
{
	if (a > b)
		return a;
	return b;
}

#endif // !whatever_h