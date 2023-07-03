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
	char * glass = argv[1];
	if(argc != 2)
		std::cout << "usage: choose a number to be search in a vector and list containers" << std::endl;
    for (int i = 0; glass[i] != '\0'; i++) {
        if (!std::isdigit(glass[i])){ 
			std::cout << "please, input a number" << std::endl;
			return 42;
			}
        }
	int nb = atoi(argv[1]);
	std::vector<int> v1;
	v1.push_back(8);
	v1.push_back(7);
	v1.push_back(10);
	v1.push_back(5);
	try{
		easyfind(v1, nb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::list<int> l1;
	l1.push_back(4);
	l1.push_back(10);
	l1.push_back(2);
	l1.push_back(1);
	try
	{
		easyfind(l1, nb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

