/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:20 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:14 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS
#define PHONEBOOK_CLASS
#include <iostream>
#include "Contact.hpp"

class PhoneBook{
public:
    PhoneBook(void);
    ~PhoneBook(void);
    void AddinList(Contact c);
    Contact GetContact (int i);

private:
    Contact list[8];
    int i;
};
#endif