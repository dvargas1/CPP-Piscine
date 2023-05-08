/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 09:56:00 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 10:01:27 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS
#define WRONGCAT_CLASS

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    WrongCat(WrongCat const &cp);
    WrongCat& operator=(WrongCat const &cp);
    ~WrongCat();
    void makeSound() const;
};
#endif