/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:29:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 17:13:28 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS
#define ANIMAL_CLASS

#include <iostream>

class Animal {
protected:
    std::string type;

public:
    Animal();
    Animal(std::string type);
    Animal(Animal const &cp);
    Animal& operator=(Animal const &cp);
    virtual ~Animal();
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif