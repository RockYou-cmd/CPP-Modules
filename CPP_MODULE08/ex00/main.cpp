#include "easyfind.h"

int main()
{
	std::vector<int> v;
	for(int i = 0; i <= 5; i++)
		v.push_back(i + 10);
	for(int i = 0; i <= 5; i++)
		std::cout << "v : " << v[i] << std::endl;
	std::cout << easyfind(v, 15) << std::endl;
}