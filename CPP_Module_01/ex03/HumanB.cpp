#include "HumanB.h"

void HumanB::attack()
{
	std::cout << name << ": attacks with their " << weaponb.getType() << std::endl;
}

HumanB::HumanB(std::string _name, Weapon wpn)
{
	name = _name;
	weaponb.setType(wpn.getType());
}