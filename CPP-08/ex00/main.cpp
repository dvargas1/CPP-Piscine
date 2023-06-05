/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 08:23:00 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/04 09:08:22 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main(int argc, char **argv){
	if(argc != 2)
		return 1;
	int nb = atoi(argv[1]);
	std::vector<int> v1;
	v1.push_back(8);
	v1.push_back(7);
	v1.push_back(10);
	v1.push_back(5);
	try{
		std::vector<int>::iterator it = easyfind(v1, nb);
		if(it != v1.end())
			std::cout << "The element has been found in vector " << std::endl;
	}
	catch(...)
	{
		std::cerr << "cant find element in array" << std::endl;
	}
	std::list<int> l1;
	l1.push_back(4);
	l1.push_back(10);
	l1.push_back(2);
	l1.push_back(1);
	try
	{
		std::list<int>::iterator it2 = easyfind(l1, nb);
		if(it2 != l1.end())
			std::cout << "\nThe element has been found in list" << std::endl;
	}
	catch(...)
	{
		std::cerr << "\ncant find element in list" << std::endl;
	}
}

