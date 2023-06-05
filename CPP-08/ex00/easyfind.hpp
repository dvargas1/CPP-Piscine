/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 08:01:47 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/04 08:51:11 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_
#define EASYFIND_

#include <iostream>
#include <algorithm>
#include <stdexcept>

template<typename T>
typename T::iterator easyfind(T &container, int data) {
	typename T::iterator i;
	i = std::find(container.begin(), container.end(), data);
	 if(i != container.end())
		 return i;
	throw std::out_of_range("File is out of range");
}

#endif
