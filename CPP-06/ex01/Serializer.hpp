/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:55:18 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/02 13:40:21 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS
#define SERIALIZER_CLASS

#include <iostream>
#include <stdint.h>

struct Data {
    std::string data;
    int number;
};

class Serializer {
public:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &cp);
    Serializer operator=(const Serializer &cp);
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif