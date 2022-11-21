#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string _name);
		void announce(void);
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif // !ZOMBIE_H