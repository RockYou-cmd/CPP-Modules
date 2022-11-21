#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	std::cout << "default ClapTrap constractor called\n";
	name = "ClapTrap";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}


ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "parametrized ClapTrap costractor called\n";
	name = _name;
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(ClapTrap &obj)
{
	std::cout << "Copy ClapTrap costractor called\n";
	name = obj.name;
	hit_points = obj.hit_points;
	energy_points = obj.energy_points;
	attack_damage = obj.attack_damage;
}


void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points >= amount)
	{
		std::cout << name << " takes " << amount << " point damage !\n";
		hit_points -= amount;
	}
	else if (hit_points < amount && hit_points > 0)
	{
		std::cout << name << " takes " << amount << " point damage !\n";
		hit_points = 0;
	}

	if (!hit_points)
		std::cout << name << " is dead!\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_points > 0 && hit_points > 0)
	{
		energy_points -= 1;
		std::cout << "ClapTrap : " << name << " attacks, "<< target <<" causing " << attack_damage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap : " << name << " don't have enough energy or hit points to attack\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energy_points > 0 && hit_points > 0)
	{
		std::cout << name << " get " << amount << " health back!\n";
		hit_points += amount;
		energy_points -= 1;
	}
	else
		std::cout << name << " don't have enough energy or hit points to repair\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment operator overload called\n";
	if (&obj == this)
		return *this;
	this->attack_damage = obj.attack_damage;
	this->energy_points = obj.energy_points;
	this->hit_points = obj.hit_points;
	this->name = obj.name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}
