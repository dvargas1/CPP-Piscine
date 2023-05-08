/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:56:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 10:08:29 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS
#define WRONGANIMAL_CLASS

#include <iostream>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(WrongAnimal const &cp);
    WrongAnimal& operator=(WrongAnimal const &cp);
    virtual ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;
};

#endif