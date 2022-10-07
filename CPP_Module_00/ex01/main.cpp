#include "PhoneBook.h"
#include "Contact.h"

int main()
{
	PhoneBook menu;
	std::string input;
	std::cout << "Enter one of the commands below : \n" << "-ADD\n" << "-SEARCH\n" << "-EXIT\n";
	while (getline(std::cin, input))
	{
		if (!input.compare("add") || !input.compare("ADD"))
			menu.add();
		else if (!input.compare("search") || !input.compare("SEARCH"))
			menu.search();
		else if (!input.compare("EXIT") || !input.compare("exit"))
			break;
		else
			std::cout << "Invalid command !\n";
		std::cout << "Enter one of the commands below : \n" << "-ADD\n" << "-SEARCH\n" << "-EXIT\n";
	}
	std::cout << "by ;)\n";
	return 0;
}