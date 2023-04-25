/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:06 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Interface.hpp"
#include <stdlib.h>

Interface::Interface(){};
Interface::~Interface(){};

std::string Interface::GetInput(std::string text)
{
	std::string input;

	std::cout<<text<< " ->";
	std::getline(std::cin, input);
	return input;
}

bool Interface::IsAllNum(std::string str){
	for(size_t i = 0; i < str.length(); i++){
		if(!std::isalnum(str[i]))
			return false;
	}
	return true;
}

bool Interface::CreateContact(PhoneBook & Book)
{
	Contact c;
	std::string input;

	input = GetInput("Contact Name");
	if(!c.SetName(input))
		return false;
	input = GetInput("Contact LastName");
	if(!c.SetLastName(input))
		return false;
	input = GetInput("Contact NickName");
	if(!c.SetNickName(input))
		return false;
	input = GetInput("Contact PhoneNumber");
	if(!c.SetPhoneNumber(input))
		return false;
	input = GetInput("Contact Secret");
	if(!c.SetSecret(input))
		return false;
	Book.AddinList(c);
	std::cout<<"Contact created "<<std::endl;
	return true;
}

void Interface::PrintTable(int flag){
	std::cout<<"|";
	PrintLine("Index");
	PrintLine("Name");
	PrintLine("LastName");
	PrintLine("Nickname");
	if(flag == 1)
	{
		PrintLine("Phone");
		PrintLine("Secret");
	}
	std::cout<<std::endl;
}

void Interface::PrintLine(std::string str){
	if(str.length() > 10){
		str.resize(9);
		str+=".";
	}
	std::cout<<std::setw(10)<<str<<"|";
	return;
}

void Interface::PrintEmpty(void){
	PrintLine("Empty");
	PrintLine("Empty");
	PrintLine("Empty");
	PrintLine("Empty");
	PrintLine("Empty");
	PrintLine("Empty");
	std::cout<<std::endl;
}

void Interface::PrintSeparator(void){
	std::cout<<"----------------------------------"<<std::endl;
}

void Interface::PrintAllContact(PhoneBook & PhoneBook)
{
	std::string index;
	int j = PhoneBook.GetIndex();
	if(j == 0){
		std::cout<<"List is Empty"<<std::endl;
		return;}
	PrintTable(0);
	for (int i = 0; i < j; i++)
		PrintContact(PhoneBook, i, 0);

	std::cout<<"Type the index you want to print -> ";
	std::getline(std::cin, index);
	if(index.empty() || !IsAllNum(index)){
		std::cout<<"Invalid index"<<std::endl;
		return;
	}
	int i = atoi(index.c_str());
	if(i < 0 || i > 7){
		std::cout<<"Invalid index"<<std::endl;
		return;
	}
	PrintTable(1);
	PrintContact(PhoneBook, i - 1, 1);
}

void Interface::PrintContact(PhoneBook & Book, int i, int flag)
{
	Contact c = Book.GetContact(i);
	if(c.GetName().empty()){
		std::cout<<"|";
		PrintEmpty();
		return;
	}
	std::cout<<"|"<<std::setw(10)<<i+1<<"|";
	PrintLine(c.GetName());
	PrintLine(c.GetLastName());
	PrintLine(c.GetNickName());
	if(flag == 1)
	{
		PrintLine(c.GetPhoneNumber());
		PrintLine(c.GetSecret());
	}
	std::cout<<std::endl;
}


