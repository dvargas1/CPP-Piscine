/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 08:55:18 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/02 09:18:42 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_CLASS
#define SERIALIZER_CLASS

#include <iostream>

class Serializer {
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};

#endif