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
	int	ParseString(std::string str);
public:
	Contact(void);
	~Contact(void);
	void PrintInfo(void);
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
