#ifndef BRAIN
#define BRAIN

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		std::string getidea(int i);
		void setidea(std::string idea, int i);
		~Brain();
};

#endif // !BRAIN
