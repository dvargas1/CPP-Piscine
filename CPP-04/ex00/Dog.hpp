/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:01:24 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 09:42:35 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(Dog const &cp);
    Dog& operator=(Dog const &cp);
    ~Dog();
    void makeSound() const;
};
#endif