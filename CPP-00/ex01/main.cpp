#include "phonebook.class.hpp"
#include <iostream>

int main()
{
	PhoneBook list;
	std::string tmp;

	PhoneBook::WelcomeMessage();
	while(1){
		std::cout<<"| Please enter a command (all in caps)"<<std::endl;
		std::getline(std::cin, tmp);
		if(tmp == "EXIT")
			break;
		else if (tmp == "ADD"){
			if(list.AddInList() == 1)
				break;
		}
		else if (tmp == "SEARCH"){
			if(list.SearchInList() == 1)
				break;
		}
		else if (tmp == "HELP")
			PhoneBook::HelpMessage();
		else{
			std::cout<<"|ERROR - Invalid input, if you need help, type \"HELP\""<<std::endl;
		}
	}
	std::cout<<"Thanks, THATS ALL FOLKS !"<<std::endl;
	return(0);
}
