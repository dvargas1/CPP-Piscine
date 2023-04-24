/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Interface.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:11 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERFACE_CLASS
#define INTERFACE_CLASS
#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include "Phonebook.hpp"

class Interface{
public:
    bool CreateContact(PhoneBook &PhoneBook);
    void PrintContact(PhoneBook &PhoneBook);
    void HelpMessage(void);
    void WelcomeMessage(void);
    void PrintLine(std::string str);
    void PrintAllContact(void);
    void PrintTable(void);
};

#endif