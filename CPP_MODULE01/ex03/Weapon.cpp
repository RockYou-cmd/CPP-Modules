#include "Weapon.h"

Weapon::Weapon(std::string _type)
{
	type = _type;
}

void Weapon::setType(const std::string _type)
{
	type = _type;
}

const std::string &Weapon::getType()
{
	return (type);
}

Weapon::Weapon()
{
}

