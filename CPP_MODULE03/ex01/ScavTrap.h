#ifndef SCAVTRAP
#define SCAVTRAP

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(ScavTrap &obj);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif