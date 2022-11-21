#ifndef FRAGTRAP
#define FRAGTRAP

#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(FragTrap &obj);
		~FragTrap();
		void highFivesGuys(void);
};

#endif