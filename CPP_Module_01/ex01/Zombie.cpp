#include "Zombie.h"

void ZOMBIE::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

ZOMBIE::~ZOMBIE()
{
	std::cout << name << ": is dead\n";
}
