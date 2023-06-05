/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 07:28:40 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/05 10:20:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_CLASS
#define SPAN_CLASS
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <set>

class Span {
public:
	Span();
	Span(unsigned int nb);
	~Span();
	Span(const Span &cp);
	Span& operator=(const Span &cp);
	unsigned int getMaxN() const;
	void addNumber(int nb);
	int shortestSpan();
	int longestSpan();
	void fillWithRandom();
	void printVector();
	template <typename InputIterator>
	void addNumberRange(InputIterator first, InputIterator last) {
		for (InputIterator it = first; it != last; ++it) {
			addNumber(*it);
		}
}
private:
	unsigned int maxN;
	std::vector<int> N;
};
#endif