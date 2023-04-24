/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 07:19:09 by dvargas           #+#    #+#             */
/*   Updated: 2023/04/24 10:50:01 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS
#define CONTACT_CLASS
#include <iostream>
#include <string>

class Contact {
public:
    Contact(void);
    ~Contact(void);
    bool ParseString(std::string String);
    bool SetName(std::string Name);
    bool SetLastName(std::string LastName);
    bool SetNickName(std::string Nickame);
    bool SetPhoneNumber(std::string PhoneNumber);
    bool SetSecret(std::string Secret);
    std::string GetName(void);
    std::string GetLastName(void);
    std::string GetNickName(void);
    std::string GetPhoneNumber(void);
    std::string GetSecret(void);

private:
std::string Name;
std::string LastName;
std::string NickName;
std::string PhoneNumber;
std::string Secret;

};
#endif