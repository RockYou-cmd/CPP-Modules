#include "Conversion.h"

void printnumber(float n)
{
	std::cout << "int : "<< static_cast<int>(n) << std::endl;
	std::cout << "float : " << std::setprecision(1) << std::fixed << n << std::endl;
	std::cout << "double : "<< n << std::endl;
}

void printchar(int c)
{
	if (c > 32 && c < 127)
		std::cout << "char : " << static_cast<char>(c) << std::endl;
	else
		std::cout << "char : Non displayable" << std::endl;
}


int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::string s = av[1];
	if (ac != 2)
	{
		std::cout << "wrong arguments number\n";
		return 0;
	}
	if (s.length() == 1)
	{
		float i = static_cast<int>(av[1][0]);
		if (isdigit(s[0]))
			i = atof(av[1]);
		printchar(i);
		printnumber(i);

	}
	else
	{
		float i = atof(av[1]);
		if (isnan(i))
		{
			std::cout << "char : impossible\n";
			std::cout << "int : impossible\n";
			std::cout << "float : nanf\n";
			std::cout << "double : nan\n";
			return 0;
		}
		else if (!i)
		{
			std::cout << "char : impossible\n";
			std::cout << "int : impossible\n";
			std::cout << "float : impossible\n";
			std::cout << "double : impossible\n";
			return 0;	
		}
		else
		{
			printchar(i);
			printnumber(i);
		}
	}
}