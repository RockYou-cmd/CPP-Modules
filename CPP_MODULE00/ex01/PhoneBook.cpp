#include "PhoneBook.h"

void PhoneBook::add()
{
	int i = 0;
	static int l;
	if (l == 8)
		l = 0;
	while (i < 8)
	{
		if (_contact[i].check_empty())
		{
			_contact[i].set_contact();
			return ;
		}
		i ++;
	}
	_contact[l ++].set_contact();
}

void PhoneBook::search()
{
	int i = 0;
	int t = 0;
	while (i < 8)
	{
		if (!_contact[i].check_empty())
		{
			std::cout << "alae\n";
			t = 1;
		}
		
		i ++;
	}
	if (t == 0)
	{
		std::cout << "YOU HAVE NO CONTACTS !\n";
		return ;
	}
	i = 0;
	std::cout << "  index  |" << " first name  |" << "  last name  |" << "   nickname  |\n";
	while(i < 8)
	{
		if (!_contact[i].check_empty())
			_contact[i].half_info(i);
		i ++;
	}
	std::cout << "Enter the index of the contact : ";
	if (std::cin >> i)
	{
		if (i < 8 && i >= 0 && !_contact[i].check_empty())
			_contact[i].get_contact();
		else
			std::cout << "There's no contact with this index\n";
	}
	else
	{
		if (std::cin.eof())
			exit(1);
		std::cout << "INVALID INPUT !\n";
		std::cin.clear();
	}
	std::cin.ignore(1000, '\n');
}