#include "Harl.h"

void Harl::complain( std::string level )
{
	void (Harl::*levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string _level[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		switch (level.compare(_level[i]))
		{
			case 0:
				(this->*levels[i])();
				return;
			default:
				break;			
		}
	}
	std::cout << " Invalid level !" << std::endl;
}

void	Harl::debug( void )
{
	std::cout << " DEBUG " << std::endl
		<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info( void )
{
	std::cout << " INFO " << std::endl
		<< "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << " WARNING " << std::endl
		<< "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error( void )
{
	std::cout << " ERROR " << std::endl
		<< "This is unacceptable! I want to speak to the manager now." << std::endl;
}

