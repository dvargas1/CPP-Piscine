/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 08:17:17 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/05 10:26:57 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main () {
{
	std::cout << " Subject " << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

{
	std::cout << "\n Limit " <<std::endl;
	Span sp = Span(10);
	try
	{
		sp.fillWithRandom();
		sp.addNumber(1);
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

{
	std::cout << "\n Fill " <<std::endl;
	Span sp = Span(1000);
	try
	{
		sp.fillWithRandom();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

{
	std::cout << "\n Fill Number Range " <<std::endl;
	std::vector<int> toAdd;
	for(int i = 0; i < 10; i++)
		toAdd.push_back(i);
	Span sp(10);
	try
	{
		sp.addNumberRange(toAdd.begin(), toAdd.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.printVector();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

}