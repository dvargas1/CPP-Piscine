/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:17:53 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:17:59 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie();
	Zombie(std::string name);
	~Zombie(void);
	void announce (void);
	void SetName(std::string name);
private:
	std::string Name;
};

#endif
