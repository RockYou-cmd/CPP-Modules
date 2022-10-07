#ifndef PHONEBOOK
#define PHONEBOOK

#include "Contact.h"
#include <iostream>

class PhoneBook
{
	private:
	Contact _contact[8];
	public:
	void add();
	void search();
};

#endif // !PHONEBOOK