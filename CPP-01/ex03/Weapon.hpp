/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 08:19:04 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 08:19:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon{
public:
	Weapon(void);
	Weapon(std::string);
	~Weapon(void);
	std::string GetType(void) const;
	void SetType(std::string);

private:
	std::string Type;
};
#endif
