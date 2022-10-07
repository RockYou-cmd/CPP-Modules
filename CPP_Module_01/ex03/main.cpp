#include "HumanA.h"
#include "HumanB.h"


int main()
{
	Weapon club = Weapon("crude spiked club");
	// std::cout << club.getType();
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}