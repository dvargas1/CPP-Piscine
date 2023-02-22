#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H
#include <iostream>
#include <string>
#include "contact.class.hpp"

class PhoneBook {
private:
	Contact ContactList[8];
	int		i;
	void IndexPlusPlus(int& i);
public:
	PhoneBook(void);
	~PhoneBook(void);
	int		AddInList(void);
	int		SearchInList(void);
	int		ParseIndex(std::string input);
	static void	PrintDash(void);
	void	PrintLine(std::string str);
	void	PrintContact(int i);
	void	PrintContactByIndex(int i);
	void	PrintTable(void);
	static void	WelcomeMessage(void);
	static void HelpMessage(void);
};


#endif
