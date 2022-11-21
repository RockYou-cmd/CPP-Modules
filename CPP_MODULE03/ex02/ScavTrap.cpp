#include "ScavTrap.h"

ScavTrap ::ScavTrap ()
{
	std::cout << "default ScavTrap constractor called\n";
	name = "ScavTrap";
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap ::ScavTrap(std::string _name)
{
	std::cout << "parametrized ScavTrap costractor called\n";
	name = _name;
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap &obj)
{
	std::cout << "Copy ClapTrap costractor called\n";
	name = obj.name;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	attack_damage = obj.attack_damage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}
void ScavTrap::attack(const std::string& target)
{
	if (energy_points > 0 && hit_points > 0)
	{
		energy_points -= 1;
		std::cout << "ScavTrap : " << name << " attacks, "<< target <<" causing " << attack_damage << " points of damage!\n";
	}
	else
		std::cout << "ScavTrap : " << name << " don't have enough energy or hit points to attack\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}
