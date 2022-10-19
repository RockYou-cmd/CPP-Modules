#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		int i;
		void complain( std::string level );
};

#endif // !HARL_H