#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
	private:
		Weapon weapona;
		std::string name;
	public:
		HumanA(std::string _name, Weapon &wpn);
		void attack();
};

#endif // !HUMANA_H