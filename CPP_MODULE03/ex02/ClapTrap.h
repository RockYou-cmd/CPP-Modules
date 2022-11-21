#ifndef CLAPTRAP
#define CLAPTRAP

#include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		unsigned int hit_points;
		unsigned int energy_points;
		unsigned int attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(ClapTrap &obj);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &obj);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif