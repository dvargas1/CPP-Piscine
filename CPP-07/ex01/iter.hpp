/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 08:18:24 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/03 09:01:27 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_
#define ITER_

#include <iostream>

template <typename DataT>
void iter (DataT *array, size_t length, void (*func)(DataT &)) {
	for(size_t i = 0; i < length ; i++)
		func(array[i]);
}

template<typename DataT>
void printer (DataT a) {
	std::cout << a << std::endl;
}

#endif