/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:20:18 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:20:30 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
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
	if(i > 7)
		i = 0;
}

void PhoneBook::PrintTable(){
	std::cout<<"|           SEARCH TABLE INFORMATION        |"<<std::endl;
	PrintDash();
	std::cout<<"|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|"<<std::endl;
	PrintDash();
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
	std::cout<<"----------------------------------------------"<<std::endl;
}

void PhoneBook::PrintContactByIndex(int i){
	std::cout<<std::endl<<"| Here are the information from the index {" << i <<"}"<< std::endl;
	this->ContactList[i].PrintInfo();
	std::cout<<std::endl;
}

void PhoneBook::PrintContact(int i){
	std::cout<<"|"<<std::setw(10)<<i<<"|";
	PrintLine(this->ContactList[i].RetFirstName());
	PrintLine(this->ContactList[i].RetLastName());
	PrintLine(this->ContactList[i].RetNickName());
	std::cout<<std::endl;
	PrintDash();
}

int PhoneBook::ParseIndex(std::string input){
	int index;
	if(input.length() > 1 || std::isalnum(input[0]) == 0)
		return(std::cout<<"| Please choose a valid index number"<<std::endl, -42);
	index = atoi(input.c_str());
	if(index > 7 || index < 0)
		return(std::cout<<"| Please choose a valid index number"<<std::endl, -42);
	return(index);
}

int PhoneBook::SearchInList(){
	std::string input;
	int index = 0;

	if (i == -1)
	{
		std::cout << "| First you need to add something on the list, use the \"ADD\" command"<<std::endl;
		return(-42);
	}
	PrintTable();
	std::cout<<"| Choose an index to show detail information"<<std::endl;
	std::getline(std::cin, input);
	if(ParseIndex(input) == -42)
		return(-42);
	index = atoi(input.c_str());
	if(this->ContactList[index].RetEmpty() == 0){
		std::cout<<"| Sorry, this position is empty"<<std::endl;
		return(-42);
	}
	PrintContactByIndex(index);
	return(0);
}

int PhoneBook::AddInList(void)
{
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string Secret;

	std::cout<<"| Please use printable characters only,in the phone number we accept numbers only"<<std::endl;
	IndexPlusPlus(i);
	while(1){
	std::cout<<"| Type the First Name"<<std::endl;
	std::getline(std::cin, FirstName);
	if(this->ContactList[i].SetFirstName(FirstName) == 0)
		break;
	}
	while(1){
	std::cout<<"| Type the Last Name"<<std::endl;
	std::getline(std::cin, LastName);
	if(this->ContactList[i].SetLastName(LastName) == 0)
		break;
	}
	while(1){
	std::cout<<"| Type the Nick Name"<<std::endl;
	std::getline(std::cin, NickName);
	if(this->ContactList[i].SetNickName(NickName) == 0)
		break;
	}
	while(1){
	std::cout<<"| Type the Phone Number"<<std::endl;
	std::getline(std::cin, PhoneNumber);
	if(this->ContactList[i].SetPhoneNumber(PhoneNumber) == 0)
		break;
	}
	while(1){
	std::cout<<"| Type the Darkest Secret"<<std::endl;
	std::getline(std::cin, Secret);
	if(this->ContactList[i].SetSecret(Secret) == 0)
		break;
	}
	this->ContactList[i].SetEmpty();
	return(0);
}

void PhoneBook::WelcomeMessage(void){
		PrintDash();
		std::cout<< "---Welcome to this incredible new tecnology THE PHONEBOOK!---"<<std::endl;
		std::cout<<"| this beautiful Phonebook works with 3 commands(all in caps please)"<<std::endl;
		std::cout<<"| ADD -> You can insert contacts and informations"<<std::endl;
		std::cout<<"| SEARCH -> You can search for contacts and show their informations"<<std::endl;
		std::cout<<"| EXIT -> You leave the program and the contacts are lost forever"<<std::endl;
		std::cout<<"| Any bugs you find can be reported to wewillignorethis@phonebook.co"<<std::endl;
		std::cout<<"| Have Fun !"<<std::endl;
		PrintDash();
}

void PhoneBook::HelpMessage(void){
	PrintDash();
	std::cout<<"| You have 3 command options, please choose one"<<std::endl;
	std::cout<<"| ADD -> You can insert contacts and informations"<<std::endl;
	std::cout<<"| SEARCH -> You can search for contacts and show their informations"<<std::endl;
	std::cout<<"| EXIT -> You leave the program and the contacts are lost forever"<<std::endl;
	PrintDash();
}
