/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:51:27 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/02 13:42:06 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() { 
    Data *one = new Data;
    Serializer serial;


    one->data = "Marvin";
    one->number = 42;
    std::cout << "one Data value -> " << one->data << std::endl;
    std::cout << "one number value -> " << one->number << std::endl;

    uintptr_t glass = serial.serialize(one);
    
    std::cout << "glass ptr -> " << glass << std::endl;

    Data *two = serial.deserialize(glass);

    std::cout << "two Data value -> " << two->data << std::endl;
    std::cout << "two number value -> " << two->number << std::endl;

    delete one;
}