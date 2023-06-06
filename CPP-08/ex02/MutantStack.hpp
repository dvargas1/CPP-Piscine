/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 07:53:22 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/06 09:11:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS
#define MUTANTSTACK_CLASS
#include <stack>
#include <iostream>
#include <string>
#include <list>

template<typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(MutantStack const &cp) : std::stack<T>(cp) {}
    MutantStack &operator=(MutantStack const &cp) {
        if (this != *cp) {
            std::stack<T>::operator=(cp);
        }
        return *this;
    }
    iterator begin() { return this->c.begin(); }
    iterator end() { return this->c.end(); }
    const_iterator begin() const { return this->c.begin(); }
    const_iterator end() const { return this->c.end(); }
};

#endif