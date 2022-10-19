#include "HumanB.h"

void HumanB::attack()
{
	if (!weaponb)
		std::cout << name << " not armed\n";
	else
		std::cout << name << ": attacks with their " << weaponb->getType() << std::endl;
}

HumanB::HumanB(std::string _name) : name(_name)
{
	name = _name;
	weaponb = NULL;
}

void HumanB::setWeapon(Weapon &wpn)
{
	weaponb = &wpn;
}
