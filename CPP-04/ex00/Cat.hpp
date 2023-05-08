/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:08:29 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 09:42:38 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS
#define CAT_CLASS

#include "Animal.hpp"

class Cat : public Animal{
public:
    Cat();
    Cat(Cat const &cp);
    Cat& operator=(Cat const &cp);
    ~Cat();
    void makeSound() const;
};
#endif