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
#include "Interface.hpp"

PhoneBook::PhoneBook(){	i = 0; }
PhoneBook::~PhoneBook(){}
Contact PhoneBook::GetContact(int i){return this->list[i];}
int PhoneBook::GetIndex(void){return i;}
void PhoneBook::AddinList(Contact c)
{
    if (i < 7) { 
        for (int j = i; j > 0; j--) {
            list[j] = list[j-1];
        }
        list[0] = c;
        i++;
    } else { 
        for (int j = 6; j >= 0; j--) {
            list[j+1] = list[j];
        }
        list[0] = c;
    }
}