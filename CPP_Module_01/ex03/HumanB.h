#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.h"

class HumanB
{
	private:
		Weapon weaponb;
		std::string name;
	public:
		HumanB();
		HumanB(std::string _name, Weapon wpn);
		void attack();
};

#endif // !HUMANB_H