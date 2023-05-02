/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:18:14 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:18:15 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void){

	std::string str = "HI THIS IS BRAIN";
	std::string* stringPointer = &str;
	std::string& stringReference = str;

	std::cout<<"-- Vamos printar os endereços -- "<<std::endl;
	std::cout<<"Endereço da string ->";
	std::cout<<&str<<std::endl;
	std::cout<<"Endereço em que o ponteiro aponta ->";
	std::cout<<stringPointer<<std::endl;
	std::cout<<"Endereço da referencia ->";
	std::cout<<&stringReference<<std::endl;
	std::cout<<"\n\n-- Vamos printar os valores -- "<<std::endl;
	std::cout<<"Valor da string ->";
	std::cout<<str<<std::endl;
	std::cout<<"Valor em que o ponteiro aponta ->";
	std::cout<<*stringPointer<<std::endl;
	std::cout<<"Valor referenciado ->";
	std::cout<<stringReference<<std::endl;

	return(0);
}
