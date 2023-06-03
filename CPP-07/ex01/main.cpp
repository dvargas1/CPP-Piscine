/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 08:25:41 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/03 08:38:45 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main() {
	char a1[6] = { 'D', 'a', 'n', 'i', 'e', 'l' };
	int a2[2] = {4,2};
	float a3[3] = {19.32f , 42.42f, 21.21f};
	double a4[3] = {19.32123123 , 42.42424242, 21.21211212};
	std::cout << "chars " <<std::endl;
	::iter(a1, 6, &printer);
	std::cout << "\nintegers " <<std::endl;
	::iter(a2, 2, &printer);
	std::cout << "\nfloats " <<std::endl;
	::iter(a3, 3, &printer);
	std::cout << "\ndoubles " <<std::endl;
	::iter(a4, 3, &printer);
}