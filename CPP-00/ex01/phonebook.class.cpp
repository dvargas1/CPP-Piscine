#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include "phonebook.class.hpp"

PhoneBook::PhoneBook(void): i(-1)
{
	return;
}
PhoneBook::~PhoneBook(void)
{
	return;
}

void PhoneBook::IndexPlusPlus(int& i){
	i++;
	if(i > 8)
		i = 8;
}

void PhoneBook::PrintTable(){
	std::cout<<"Menu lindo 2"<<std::endl;
	for(int i = 0; i < 8; i++){
		PrintContact(i);
	}
	std::cout<<std::endl;
}

void PhoneBook::PrintLine(std::string str){
	if(str.length() > 10){
		str.resize(9);
		str+=".";
	}
	std::cout<<std::setw(10)<<str<<"|";
	return;
}

void PhoneBook::PrintDash(){
	std::cout<<"-------------------------------------------------------------------"<<std::endl;
}

void PhoneBook::PrintContactByIndex(int i){
	std::cout<<"Here are the information from the index" << i << std::endl;
	this->ContactList[i].PrintInfo();
	std::cout<<std::endl;
}

void PhoneBook::PrintContact(int i){
	std::cout<<"|"<<std::setw(10)<<i<<"|";
	PrintLine(this->ContactList[i].RetFirstName());
	PrintLine(this->ContactList[i].RetLastName());
	PrintLine(this->ContactList[i].RetNickName());
	PrintLine(this->ContactList[i].RetPhoneNumber());
	std::cout<<std::endl;
	PrintDash();
}

int PhoneBook::ParseIndex(std::string input){
	int index;
	if(input.length() > 1 || std::isalnum(input[0]))
		return(-42);
	index = input[0] - '0';
	if(index > 8 || index < 0)
		return(-42);
	return(index);
}

int PhoneBook::SearchInList(){
	std::string input;
	int index = 0;

	if (i == -1)
	{
		std::cout << "First you need to add something on the list";
		return(1);
	}
	std::cout<<"Choose an index to show detail information"<<std::endl;
	std::getline(std::cin, input);
	if(ParseIndex(input) == -42)
		return(1);
	index = ParseIndex(input);
	PrintContactByIndex(index);
	

	PrintContact(1);
	return(0);
}

int PhoneBook::AddInList(void)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string Secret;
	
	IndexPlusPlus(i);
	std::cout<<"Type the First Name"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetFirstName(FirstName) == 1)
		return(1);
	std::cout<<"Type the Last Name"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetLastName(FirstName) == 1)
		return(1);
	std::cout<<"Type the Nick Name"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetNickName(FirstName) == 1)
		return(1);
	std::cout<<"Type the Phone Number"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetPhoneNumber(FirstName) == 1)
		return(1);
	std::cout<<"Type the Secret"<<std::endl<<">";
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetSecret(FirstName) == 1)
		return(1);
	return(0);
}
