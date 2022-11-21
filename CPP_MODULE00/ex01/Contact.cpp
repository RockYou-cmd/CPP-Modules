#include "Contact.h"

void Contact::set_contact()
{
	std::cout << "enter the first name : ";
	if (!getline(std::cin, first_name))
		exit(1);
	std::cout << "enter the last name : ";
	if (!getline(std::cin, last_name))
		exit(1);
	std::cout << "enter the nick name : ";
	if (!getline(std::cin, nick_name))
		exit(1);
	std::cout << "enter the Phone number : ";
	if (!getline(std::cin, phone_number))
		exit(1);
	std::cout << "enter the darkest secret : ";
	if (!getline(std::cin, darkest_secret))
		exit(1);
	if (first_name.empty() || last_name.empty() || nick_name.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "Contact does not saved because of empty fields !\n";
		first_name = "";
		last_name = "";
		nick_name = "";
		phone_number = "";
		darkest_secret = "";
	}
	else
		std::cout << first_name << " contact saved successfully\n";
}


void Contact::get_contact()
{
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name : " << last_name << std::endl;
	std::cout << "nick name : " << nick_name << std::endl;
	std::cout << "phone number : " << phone_number << std::endl;
	std::cout << "darkest secret : " << darkest_secret << std::endl;
}

int Contact::check_empty()
{
	return first_name.empty();
}

void esp(int i)
{
	while (i-- >= 0)
		std::cout << ' ';
}

void Contact::half_info(int i)
{
	std::cout << "    " << i << "    |";
	if (first_name.length() > 10)
		std::cout << "  "<< first_name.substr(0, 9) + '.' << " |";
	else
	{
		esp(11 - first_name.length());
		std::cout  << first_name;
		std::cout << " |";
	}
	if (last_name.length() > 10)
		std::cout << "  "<< last_name.substr(0, 9) + '.' << " |";
	else
	{
		esp(11 - last_name.length());
		std::cout << last_name;
		std::cout << " |";
	}
	if ( nick_name.length() > 10)
		std::cout << "  "<<  nick_name.substr(0, 9) + '.' << " |";
	else
	{
		esp(11 -  nick_name.length());
		std::cout << nick_name;
		std::cout << " |";
	}
	std::cout << std::endl;
}