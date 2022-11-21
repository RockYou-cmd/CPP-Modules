#include "iter.h"

void print(int a)
{
	std::cout << a + 1 << std::endl;
}

int main()
{
	int array[4] = {2,0,0,1};
	iter(array, 4, &print);
}