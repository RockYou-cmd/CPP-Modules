#include "Zombie.h"

int main ()
{
	Zombie a("kawazaki");
	Zombie *n = newZombie("ducati");
	a.announce();
	n->announce();
	randomChump("ktm");
	delete n;
	
}