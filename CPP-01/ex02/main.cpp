#include <string>
#include <iostream>

int main(void){

	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout<<"-- Vamos printar os endereços -- "<<std::endl;
	std::cout<<"Endereço da string"<<std::endl;
	std::cout<<&str<<std::endl;
	std::cout<<"Endereço em que o ponteiro aponta"<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<"Endereço da referencia"<<std::endl;
	std::cout<<&stringREF<<std::endl;
	std::cout<<"\n\n-- Vamos printar os valores -- "<<std::endl;
	std::cout<<"Valor da string"<<std::endl;
	std::cout<<str<<std::endl;
	std::cout<<"Valor em que o ponteiro aponta"<<std::endl;
	std::cout<<*stringPTR<<std::endl;
	std::cout<<"Valor referenciado"<<std::endl;
	std::cout<<stringREF<<std::endl;

	return(0);
}
