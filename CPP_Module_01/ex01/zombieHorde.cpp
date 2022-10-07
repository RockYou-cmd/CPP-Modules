#include "Zombie.h"

void ZOMBIE::set_name(std::string _name)
{
	name = _name;
}

ZOMBIE* zombieHorde( int N, std::string name )
{	
	ZOMBIE *z = new ZOMBIE[N];
	int i = 0;

	while (i < N)
	{
		z[i].set_name(name);
		i ++;
	}
	return (z);
}