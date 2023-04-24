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
#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>

class Interface{

public:
    Interface(void);
    ~Interface(void);
    bool CreateContact(PhoneBook & Book);
    void PrintContact(PhoneBook & Book, int i, int flag);
    void HelpMessage(void);
    void WelcomeMessage(void);
    void PrintLine(std::string str);
    void PrintAllContact(PhoneBook & PhoneBook);
    void PrintSeparator(void);
};

#endif