#include "contact.class.hpp"
#include <iostream>
#include <string>
#include <regex>

int Contact::ParseString(std::string str){
	std::regex patern("^[a-zA-Z0-9]*$");
	if(str.empty()){
		std::cout<< "The string cant be empty"<<std::endl;
		return(1);
	}
	else if(std::regex_match(str,patern)){
		std::cout<<"this should contain alphanumerical characters only"<<std::endl;
		return(1);
	}
	return(0);
}

void Contact::PrintProperly(std::string id, std::string str){

	std::cout << id << '\n';
	for(int i = 0; i <= 9; i++)
		std::cout<<str[i];
	std::cout<<std::endl;
}

void Contact::PrintInfo(){
	Contact::PrintProperly("First Name = ", this->RetFirstName());
	Contact::PrintProperly("Last Name = ", this->RetLastName());
	Contact::PrintProperly("Nick Name = ", this->RetNickName());
	Contact::PrintProperly("Phone Number = ", this->RetPhoneNumber());
	Contact::PrintProperly("Secret = ", this->RetSecret());
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
	std::regex patern("^[0-9]+$");
	if(str.empty()){
		std::cout<< "The string cant be empty"<<std::endl;
		return(1);
	}
	else if(std::regex_match(str,patern)){
		std::cout<<"this should contain numbers only"<<std::endl;
		return(1);
	}
	this->PhoneNumber = str;
	return(0);
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
