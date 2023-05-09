/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:01:24 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 08:37:12 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS
#define DOG_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
    Dog();
    Dog(Dog const &cp);
    Dog& operator=(Dog const &cp);
    ~Dog();
    Brain * getBrain() const;
    void makeSound() const;
private:
    Brain* brain;
};
#endif