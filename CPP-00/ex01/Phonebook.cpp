/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:18 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:11 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>

PhoneBook::PhoneBook(){	i = 0;}
PhoneBook::~PhoneBook(){}

Contact PhoneBook::GetContact(int i)
{
	return this->list[i];
}

void PhoneBook::AddinList(Contact c)
{
	this->list[this->i] = c;
	if(i = 8)
		return;
	this->i++;
}