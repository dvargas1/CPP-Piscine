/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:40:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 10:11:41 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(){
    {
    std::cout<<"lets fail test first"<<std::endl;
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
    std::cout<<"accurate test now:"<<std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout<<i<<std::endl;
    i->makeSound(); 
    std::cout<<j<<std::endl;
    j->makeSound();
    std::cout<<meta<<std::endl;
    meta->makeSound();


    delete meta;
    delete i;
    delete j;
    return 0;
    }
}