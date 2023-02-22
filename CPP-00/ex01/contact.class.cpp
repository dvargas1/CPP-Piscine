#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Contact::Contact(void): IsEmpty(0)
{
	return;
}

Contact::~Contact()
{
	return;
}

int Contact::ParseString(std::string str){
	if(str.empty()){
		std::cout<< "The string cant be empty"<<std::endl;
		return(1);
	}
	for(std::string::size_type i = 0; i < str.size(); i++){
		if(std::isprint(str[i]) == 0){
			std::cout<<"this should contain PRINTABLE characters only"<<std::endl;
			return(1);
		}
	}
	return(0);
}

void Contact::PrintInfo(){
	PhoneBook::PrintDash();
	std::cout<<"|   First Name = "<< this->RetFirstName()<<std::endl;
	std::cout<<"|   Last Name = "<<this->RetLastName()<<std::endl;
	std::cout<<"|   Nick Name = "<<this->RetNickName()<<std::endl;
	std::cout<<"|   Phone Number = "<<this->RetPhoneNumber()<<std::endl;
	std::cout<<"|   Darkest Secret = "<<this->RetSecret()<<std::endl;
	PhoneBook::PrintDash();
}

int Contact::SetFirstName(std::string str){
	if(Contact::ParseString(str) == 1)
		return(1);
	this->FirstName = str;
	return(0);
}
int Contact::SetLastName(std::string str){
	if(Contact::ParseString(str) == 1)
		return(1);
	this->LastName = str;
	return(0);
}
int Contact::SetNickName(std::string str){
	if(Contact::ParseString(str) == 1)
		return(1);
	this->NickName = str;
	return(0);
}
int Contact::SetPhoneNumber(std::string str){
	if(str.empty()){
		std::cout<< "The string cant be empty"<<std::endl;
		return(1);
	}
	for(std::string::size_type i = 0; i < str.size(); i++){
		if(std::isdigit(str[i]) == 0){
			std::cout<<"The Phone Number should contain NUMBERS only"<<std::endl;
			return(1);
		}
	}
	this->PhoneNumber = str;
	return(0);
}

int Contact::RetEmpty(void)
{
	return(IsEmpty);
}
void Contact::SetEmpty(void){
	IsEmpty = 1;
}

int Contact::SetSecret(std::string str){
	if(Contact::ParseString(str) == 1)
		return(1);
	this->Secret = str;
	return(0);
}
std::string Contact::RetFirstName(){
	return(this->FirstName);
}
std::string Contact::RetLastName(){
	return(this->LastName);
}
std::string Contact::RetNickName(){
	return(this->NickName);
}
std::string Contact::RetPhoneNumber(){
	return(this->PhoneNumber);
}
std::string Contact::RetSecret(){
	return(this->Secret); 
}
