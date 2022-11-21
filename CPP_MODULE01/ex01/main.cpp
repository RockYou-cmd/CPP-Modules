#include "Zombie.h"

int main ()
{
	ZOMBIE *z = zombieHorde(5, "kawa");
	int i = 0;

	while(i < 5)
		z[i ++].announce();
	delete [] z;
}