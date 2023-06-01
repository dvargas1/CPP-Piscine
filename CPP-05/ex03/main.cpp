/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/31 21:46:50 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(){
	Bureaucrat Daniel("Daniel", 1);
	Bureaucrat Noob("Daniel", 149);
	Intern someRandomIntern;
	AForm *PardonForm = someRandomIntern.makeForm("presidential pardon", "Bender");
	AForm *TreeForm = someRandomIntern.makeForm("shrubbery creation", "Bender");
	AForm *RobotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");
	// AForm *WrongForm = someRandomIntern.makeForm("WrongForm", "Noice");
	PardonForm->beSigned(Daniel);
	TreeForm->beSigned(Daniel);
	RobotomyForm->beSigned(Daniel);
	std::cout << "***Execute Pardon Form***" << std::endl;
	// PardonForm->execute(Noob);
	 PardonForm->execute(Daniel);
	std::cout << "\n***Execute TreeForm***" << std::endl;
	// TreeForm->execute(Noob);
	TreeForm->execute(Daniel);
	std::cout << "\n***Execute RobotomyForm***" << std::endl;
	// RobotomyForm->execute(Noob);
	RobotomyForm->execute(Daniel); 

	// std::cout << "\n***Execute WrongForm***" << std::endl;
	// RobotomyForm->execute(Noob);
	// WrongForm->execute(Daniel); 

	delete PardonForm;
	delete TreeForm;
	delete RobotomyForm;
}