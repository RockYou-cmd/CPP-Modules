#ifndef easyfind_h
#define easyfind_h

#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>

int easyfind(T &container, int n)
{
	typename T::iterator it = container.begin();
	while(it != container.end())
	{
		if (*it == n)
			return (*it);
		it ++;
	}
	return (-1);
}

#endif // !easyfind_h