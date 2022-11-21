#include "replace.hpp"

int main (int ac, char **av)
{
    if (ac == 4 && av[1] && av[2] && av[3])
		replace(av[1], av[2], av[3]);
	else
        std::cout << "bad argments!";
	return 0;
}
