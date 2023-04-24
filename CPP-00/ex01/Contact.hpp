/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:09 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 07:19:09 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
#define CONTACT_CLASS
#include <iostream>
#include <string>
#include "Interface.hpp"

class Contact {
public:
    Contact(void);
    ~Contact(void):
    bool ParseString(std::string String);
    bool SetName(std::string Name);
    bool SetLastName(std::string LastName);
    bool SetNickname(std::string Nickame);
    bool SetPHoneNumber(std::string PhoneNumber);
    bool SetSecret(std::string Secret);
    void GetName(void);
    void GetLastName(void);
    void GetNickname(void);
    void GetPHoneNumber(void);
    void GetSecret(void);

private:
std::string Name;
std::string Lastname;
std::string Nickname;
std::string PhoneNumber;
std::string Secret;
}
#endif