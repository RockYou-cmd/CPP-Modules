#include "Zombie.h"

void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string _name)
{
	name = _name;
}

Zombie::~Zombie()
{
	std::cout << name << ": is dead\n";

}
