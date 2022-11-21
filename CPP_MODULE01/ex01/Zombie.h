#ifndef Zombie
#define Zombie

#include <iostream>

class ZOMBIE
{
	private:
		std::string name;
	public:
		void set_name(std::string _name);
		void announce(void);
		~ZOMBIE();
};

ZOMBIE* zombieHorde( int N, std::string name );

#endif // !Zombie