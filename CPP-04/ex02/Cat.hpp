/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:08:29 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 09:07:31 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(Cat const &cp);
    Cat& operator=(Cat const &cp);
    ~Cat();
    Brain * getBrain() const;
    void makeSound() const;
private:
    Brain* brain;
};
#endif