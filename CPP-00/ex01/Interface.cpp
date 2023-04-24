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

Interface::Interface(){};
Interface::~Interface(){};

bool Interface::CreateContact(PhoneBook &PhoneBook)
{
	//TODO -> logica para deixar legivel pfvr.
	Contact c;
	std::string input;

	std::cout << "Contact Name:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetName(input))
		return false;
	std::cout << "Contact LastName:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetLastName(input))
		return false;
	std::cout << "Contact NickName:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetNickName(input))
		return false;
	if(!c.SetPhoneNumber(input))
	std::cout << "Contact PhoneNumber:"<<std::endl;
	std::getline(std::cin, input);
		return false;
	std::cout << "Contact Secret:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetSecret(input))
		return false;
	PhoneBook.AddinList(c);
	return true;
}

void Interface::PrintLine(std::string str){
	if(str.length() > 10){
		str.resize(9);
		str+=".";
	}
	std::cout<<std::setw(10)<<str<<"|";
	return;
}

void Interface::PrintContact(PhoneBook & PhoneBook)
{
	std::string index;

	std::cout<<"Type the index you want to print"<<std::endl;
	std::getline(std::cin, index);
	int i = atoi(index.c_str());
	if(i < 0 || i > 7){
		std::cout<<"Bad index"<<std::endl;
		return;}
	Contact c = PhoneBook.GetContact(i);
	PrintLine(c.GetName());
	PrintLine(c.GetLastName());
	PrintLine(c.GetNickName());
	PrintLine(c.GetPhoneNumber());
	PrintLine(c.GetSecret());
}