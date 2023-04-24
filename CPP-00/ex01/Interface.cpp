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

bool Interface::CreateContact(PhoneBook & Book)
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
	std::cout << "Contact PhoneNumber:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetPhoneNumber(input))
		return false;
	std::cout << "Contact Secret:"<<std::endl;
	std::getline(std::cin, input);
	if(!c.SetSecret(input))
		return false;
	Book.AddinList(c);
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

void Interface::PrintSeparator(void){
	std::cout<<"----------------------------------"<<std::endl;
}

void Interface::PrintAllContact(PhoneBook & PhoneBook)
{
	std::string index;

	for (int i = 0; i < 8; i++)
		PrintContact(PhoneBook, i, 0);

	std::cout<<"Type the index you want to print"<<std::endl;
	std::getline(std::cin, index);
	//TODO CONCERTAR ESSA MALDITA ISALNUM;
	if(index.empty() || !std::isdigit(index[0]))
		return;
	int i = atoi(index.c_str());
	if(i < 0 || i > 7){
		std::cout<<"Bad index"<<std::endl;
		return;}
	PrintSeparator();
	PrintContact(PhoneBook, i - 1, 1);
}

void Interface::PrintContact(PhoneBook & Book, int i, int flag)
{
	Contact c = Book.GetContact(i);
	std::cout<<"|"<<std::setw(10)<<i+1<<"|";
	PrintLine(c.GetName());
	PrintLine(c.GetLastName());
	PrintLine(c.GetNickName());
	PrintLine(c.GetPhoneNumber());
	if(flag == 1)
		PrintLine(c.GetSecret());
	std::cout<<std::endl;
}

