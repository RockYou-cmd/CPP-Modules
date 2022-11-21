#include "HumanA.h"

void HumanA::attack()
{
	std::cout << name << ": attacks with their " << weapona.getType() << std::endl;
}

HumanA::HumanA(std::string _name, Weapon &wpn) : name(_name), weapona(wpn)
{
}
