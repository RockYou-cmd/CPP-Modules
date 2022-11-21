#include "FragTrap.h"

int main()
{
	FragTrap twoo("twoo");
	ScavTrap one("one");

	one.attack("twoo");
	twoo.takeDamage(50);
	twoo.attack("one");
	one.takeDamage(50);
	twoo.attack("one");
	twoo.takeDamage(25);
	twoo.attack("one");
	twoo.attack("one");
	twoo.beRepaired(25);
	one.guardGate();
	twoo.highFivesGuys();
	return 0;

}