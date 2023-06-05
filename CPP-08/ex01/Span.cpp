/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 07:39:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/05 10:26:57 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : maxN(0), N(0) {}
Span::Span(unsigned int nb) : maxN(nb), N(0) {}
Span::~Span(){}
Span::Span(const Span &cp) : maxN(cp.getMaxN()), N(cp.N) {}
Span &Span::operator=(const Span &cp) {
	if(this != &cp) {
		maxN = cp.getMaxN();
		N = cp.N;
	}
	return *this;
}

unsigned int Span::getMaxN() const { return maxN; }

void Span::addNumber(int nb) {
	if(N.size() < maxN)
		N.push_back(nb);
	else
		throw std::out_of_range("cant add more itens");
}

int Span::shortestSpan() {
	if(N.size() < 2)
		throw std::out_of_range("dont have enough itens in vector to compare");
	std::sort(N.begin(), N.end());
	int shortest = N[1] - N[0];
	for (size_t i = 2; i < N.size(); ++i) {
		int glass = N[i] - N[i - 1];
		if(glass < shortest) {
			//FOR DEBUG
			//std::cout << "\n" << N[i] << " - " << N[ i - 1] <<" total ->";
			//std::cout << glass << std::endl;
			shortest = glass;
		}
	}
	return shortest;
}

int Span::longestSpan() {
	if(N.size() < 2)
		throw std::out_of_range("dont have enough itens in vector to compare");
	std::sort(N.begin(), N.end());
	int longest = N[N.size() - 1] - N[0];
	//For Debug
	//std::cout << "\n" << N[N.size() - 1] << " - " << N[0] <<" total ->";
	//std::cout << longest << std::endl;
	return longest;
}

void Span::fillWithRandom() {
    std::srand(std::time(0));
	int Nsize = N.size();
    std::set<int> generatedNumbers;
    while (generatedNumbers.size() < maxN - Nsize) {
        int randomNumber = -3000 + (std::rand() % 10000);
        if (generatedNumbers.find(randomNumber) == generatedNumbers.end()) {
            generatedNumbers.insert(randomNumber);
            addNumber(randomNumber);
        }
    }
}

void Span::printVector() {
	std::cout << "\nNumbers in vector" << std::endl;
	for(std::vector<int>::iterator it = N.begin() ; it != N.end() ; it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}