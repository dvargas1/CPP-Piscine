/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 08:05:35 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/03 09:01:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_
#define WHATEVER_

template <typename DataT>
void swap (DataT &a, DataT &b) {
	DataT c;
	c = a;
	a = b;
	b = c;
}

template <typename DataT>
DataT min (DataT a, DataT b){
	if(a < b)
		return a;
	return b;
}

template <typename DataT>
DataT max (DataT a, DataT b){
	if(a > b)
		return a;
	return b;
}


#endif