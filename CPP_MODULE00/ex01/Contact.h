#ifndef CONTACT
#define CONTACT

#include <iostream>

class Contact
{
	private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	public:
	void set_contact();
	void get_contact();
	void half_info(int i);
	int check_empty();
};

#endif // !CONTACT