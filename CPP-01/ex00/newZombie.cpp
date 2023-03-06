/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:16:59 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* a = new Zombie(name);
	std::cout<<"The monster named "<< name<< " emerge on the HEAP"<<std::endl;
	return(a);
}
