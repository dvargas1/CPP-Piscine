/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:20:14 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:20:31 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <iostream>

class Contact{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string Secret;
	int		IsEmpty;
	int	ParseString(std::string str);
public:
	Contact(void);
	~Contact(void);
	void PrintInfo(void);
	int RetEmpty(void);
	void	SetEmpty(void);
	int SetFirstName(std::string str);
	int SetLastName(std::string str);
	int SetNickName(std::string str);
	int SetPhoneNumber(std::string str);
	int SetSecret(std::string str);
	std::string RetFirstName(void);
	std::string RetLastName(void);
	std::string RetNickName(void);
	std::string RetPhoneNumber(void);
	std::string RetSecret(void);
};

#endif
