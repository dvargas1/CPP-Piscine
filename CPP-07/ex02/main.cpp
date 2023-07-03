/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 09:02:54 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/03 09:38:48 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(){
	
	Array<int> empty;

	Array<int> a1(2);
	a1[0] = 42;
	a1[1] = 21;

	std::cout << "size of array  a1: " << a1.size() << std::endl;
	std::cout << "a1 ArrayMembers: " << a1.size() << std::endl;
	for(int i = 0 ; i < a1.size(); i++)
		std::cout << a1[i] << std::endl;

	std::cout << "\ninvalid index test:" << std::endl;
	try
	{
		a1[2] = 100;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << "\ncreating a2, an copy from a1 using atribute constructor of class" << std::endl;
	Array<int> a2 = a1;
	std::cout << "size of array  a: " << a1.size() << std::endl;
	for(int i = 0 ; i < a2.size(); i++)
		std::cout << a2[i] << std::endl;

	std::cout << "\nchangin a1[0] value to test if hes the same memory of a2[0]" << std::endl;
	a1[0] = 10;
	std::cout << "a1 after change -> " << a1[0] << std::endl;
	std::cout << "a2 after a1 change -> " << a2[0] << std::endl;

}