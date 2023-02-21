#include <iostream>
#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}
PhoneBook::~PhoneBook(void)
{
	return;
}

int PhoneBook::AddInList(void)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string Secret;

	std::cout<<"Type the First Name"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetFirstName(FirstName) == 1)
		return(1);
	std::cout<<"Type the First Name"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetFirstName(FirstName) == 1)
		return(1);
	return(0);
}
