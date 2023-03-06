/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:38:53 by dvargas           #+#    #+#             */
/*   Updated: 2023/03/06 11:50:00 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>

class Harl{
	typedef void(Harl::*Func)(void);
public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
	void exemplo();
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	Func automate[4];
};

#endif
