/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 08:42:58 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/03 09:32:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS
#define ARRAY_CLASS

#include <iostream>

template <typename T>
class Array {
private:
	T *elements;
	int arraysize;
public:
	~Array() { delete[] elements; }
	Array(): elements(NULL), arraysize(0) {}
	Array(unsigned int sizeofarray) : arraysize(sizeofarray) { elements = new T[arraysize]; }
	Array(Array const &cp) : arraysize(cp.size()) {
		elements = new T[arraysize];
		copyElements(size(), elements, cp.elements);
	}
	int size() const { return arraysize; }
	Array& operator=(Array const &cp){
		if (this != &cp){
			delete[] elements;
			arraysize = cp.size();
			elements = new T[arraysize];
			copyElements(size(), elements, cp.elements);
		}
		return *this;
	}
	T& operator[](int index) {
		if (index < 0 || index >= arraysize)
			throw std::out_of_range("Index out of range");
		return elements[index];
	}
	void copyElements(int size, T *arr, T *old) {
		for(int i = 0; i < size; i++)
			arr[i] = old[i];
	}

};

#endif