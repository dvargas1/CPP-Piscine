/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:07 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:04 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

bool Contact::ParseString(std::string String){
	if(String.empty())
		return false;
	for(size_t i = 0; i < String.size(); i++){
		if(std::isprint(String[i]))
			return false;
		}
	return true;
}

bool Contact::SetName(std::string Name){
	if(!ParseString(Name))
		return false;
	this->Name = Name;
	return true;
}

bool Contact::SetLastName(std::string LastName){
	if(!ParseString(LastName))
		return false;
	this->LastName = LastName;
	return true;
}
bool Contact::SetNickName(std::string Nickname){
	if(!ParseString(Nickname))
	return(false);
	this->NickName = Nickname;
	return true;
}

bool Contact::SetPhoneNumber(std::string PhoneNumber){
	for(size_t i = 0; i < PhoneNumber.size(); i++){
		if(std::isdigit(PhoneNumber[i]))
			return(false);
	}
	this->PhoneNumber = PhoneNumber;
	return true;
}

bool Contact::SetSecret(std::string Secret){
	if(!ParseString(Secret))
		return false;
	this->Secret = Secret;
	return true;
}


std::string Contact::GetName(void) {return this->Name;}
std::string Contact::GetLastName(void) {return this->LastName;}
std::string Contact::GetNickName(void) {return this->NickName;}
std::string Contact::GetPhoneNumber(void) {return this->PhoneNumber;}
std::string Contact::GetSecret(void) {return this->Secret;}
