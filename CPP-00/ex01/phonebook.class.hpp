#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H
#include "contact.class.hpp"

class PhoneBook {
private:
	Contact ContactList[8];
	int		i;

public:
	PhoneBook(void);
	~PhoneBook(void);
	int		AddInList(void);
	int		SearchInList(void);
};


#endif
