#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie z(name);
	z.announce();
}