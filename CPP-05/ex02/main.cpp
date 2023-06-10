/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/23 08:46:38 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(){
	ShrubberyCreationForm a("Amazonia");
	RobotomyRequestForm b("Target");
	PresidentialPardonForm c("Tutines");
    Bureaucrat	HighBureucrat("Luna", 1);
	Bureaucrat	MediumBureucrat("Vargas", 43);
	Bureaucrat	LowBureucrat("Daniel", 140);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	
	std::cout << "\n\n->Daniel will never sign this :("<<std::endl;
	LowBureucrat.executeForm(c);
	HighBureucrat.signForm(c);
	LowBureucrat.executeForm(c);
	HighBureucrat.executeForm(c);

	std::cout << "\n\n->Vargas cant execute but Luna can help"<<std::endl;
	MediumBureucrat.executeForm(b);
	HighBureucrat.signForm(b);
	MediumBureucrat.executeForm(b);

	std::cout << "\n\n->Execute After grade increment"<<std::endl;
	LowBureucrat.executeForm(a);
	HighBureucrat.signForm(a);
	LowBureucrat.gradeIncrement();
	LowBureucrat.gradeIncrement();
	LowBureucrat.gradeIncrement();
	LowBureucrat.executeForm(a);
}