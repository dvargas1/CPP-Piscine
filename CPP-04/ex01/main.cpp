/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 08:40:36 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/09 18:12:09 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#define NB_OF_ANIMALS 12
int main(){
    Cat a;
    Dog b;

    std::cout<<"\nMy type is "<<a.getType()<<" i will start thinking now"<<std::endl;
    a.getBrain()->setIdea("i Think i`m a cat");
    a.getBrain()->setIdea("i wanna meow");
    a.getBrain()->setIdea("i will meow");
    a.getBrain()->brainDump();
    a.makeSound();
    
    std::cout<<"\nMy type is "<<b.getType()<<" i will start thinking now"<<std::endl;
    b.getBrain()->setIdea("i Think i`m a dog");
    b.getBrain()->setIdea("i wanna meow, but i dont know how to meow");
    b.getBrain()->setIdea("i will bark instead");
    b.getBrain()->brainDump();
    b.makeSound();

    std::cout<<"\nSTART CLONE MACHINE"<<std::endl;
    Animal *animal_array[NB_OF_ANIMALS];
        
    for(int j = 0; j < NB_OF_ANIMALS; j++){
    if(j % 2 == 0)
        animal_array[j] = new Cat(a);
    else
        animal_array[j] = new Dog(b);       
    }
    std::cout<<std::endl;
    for (int j = 0; j < NB_OF_ANIMALS; j++) {
    if (j % 2 == 0) {
        std::cout<<"my number is "<<j<<" and my type is "<<animal_array[j]->getType()<<std::endl;
        static_cast<Cat*>(animal_array[j])->getBrain()->brainDump();
        std::cout<<"\n";
    } else {
        std::cout<<"my number is "<<j<<" and my type is "<<animal_array[j]->getType()<<std::endl;
        static_cast<Dog*>(animal_array[j])->getBrain()->brainDump();
        std::cout<<"\n";
    }
}
    std::cout<<"NOISE ALERT !!!"<<std::endl;    
    for (int j = 0; j < NB_OF_ANIMALS; j++)
        animal_array[j]->makeSound();
    std::cout<<std::endl; 

    
    for (int j = 0; j < NB_OF_ANIMALS; j++)
        delete animal_array[j];
}