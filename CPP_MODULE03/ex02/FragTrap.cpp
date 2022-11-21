#include "FragTrap.h"

FragTrap::FragTrap()
{
	std::cout << "default FragTrap constractor called\n";
	name = "FragTrap";
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}


FragTrap::FragTrap(std::string _name)
{
	std::cout << "parametrized FragTrap costractor called\n";
	name = _name;
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
}

FragTrap::FragTrap(FragTrap &obj)
{
	std::cout << "Copy FragTrap costractor called\n";
	name = obj.name;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	attack_damage = obj.attack_damage;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " request a high five\n";
}