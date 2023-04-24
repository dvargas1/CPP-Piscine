/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:11 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 07:19:11 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_CLASS
#define INTERFACE_CLASS
#include <iostream>
#include "Contact.hpp"
#include "Phonebook.hpp"

class Interface{
public:
    bool CreateContact(PhoneBook &PhoneBook);
    void SearchContact(int i);
    void HelpMessage(void);
    void WelcomeMessage(void);
    void PrintLine(void);
    void PrintAllContact(void);
    void PrintTable(void);
}

#endif