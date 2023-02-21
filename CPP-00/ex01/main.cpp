#include "phonebook.class.hpp"
#include <iostream>

int main()
{
	PhoneBook list;
	std::string tmp;

	while(1){
		std::cout<< "Hello !"<<std::endl;
		std::cout<<"Oque tu quer fazer?"<<std::endl << ">";
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
		else{
			std::cout<<"UM BELO E LINDO MENU";

		}
	}
	std::cout<<"THE END";
	return(0);

}
