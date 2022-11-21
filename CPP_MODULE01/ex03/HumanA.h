#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.h"

class HumanA
{
	private:
		std::string name;
		Weapon &weapona;
	public:
		HumanA(std::string _name, Weapon &wpn);
		void attack();
};

#endif // !HUMANA_H