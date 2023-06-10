/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:40:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 15:20:51 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    {
    std::cout<<"WrongAnimal class test: "<<std::endl;
    const WrongAnimal* meta = new WrongAnimal();
    const WrongAnimal* i = new WrongCat();
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    meta->makeSound();
    delete meta;
    delete i;
    std::cout<<"\n\n"<<std::endl;
    }
    {
    std::cout<<"Animal class test now:"<<std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    j->makeSound();
    std::cout << "\n";
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    std::cout << "\n Animal class ->";
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    return 0;
    }
}