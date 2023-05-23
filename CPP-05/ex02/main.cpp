/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/22 23:29:41 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){
	ShrubberyCreationForm a("asdasdasd");
    Bureaucrat	daniel("Daniel", 22);
	std::cout << daniel << std::endl;
	std::cout << a<< std::endl;

	//daniel.signForm(a);
	daniel.executeForm(a);
}