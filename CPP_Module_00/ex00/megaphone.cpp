#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j = 0;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	 	return 0;
	}
	while(av[j])
	{
		i = 0;
		while(av[j][i])
		{
			if (av[j][i] >= 97 && av[j][i] <= 122)
				av[j][i] = av[j][i] - 32;
			i ++;
		}
		j ++;
	}
	j = 1;
	while(av[j])
		std::cout << av[j ++];
	std::cout << std::endl;
}