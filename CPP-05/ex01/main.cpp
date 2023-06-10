/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 09:12:41 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	//Form errorWithGrade("Medical issue", 180, 20);

// Increment
	Form a("Atestado Medico", 15, 50);
    Bureaucrat	daniel("Daniel", 22);
	Bureaucrat	doctor("Doutor", 1);
	std::cout << daniel << std::endl;
	std::cout << doctor << std::endl;
	std::cout << a << std::endl;

	try
	{
		for (int cur = 0; cur < 3; cur++)
		{
			std::cout<<cur<< " tentative"<<std::endl;
			daniel.gradeIncrement();
			daniel.signForm(a);
			std::cout << daniel << std::endl;
			std::cout << a << std::endl;
			std::cout<<"----------------"<<std::endl;
		}
		doctor.signForm(a);
		std::cout << a << std::endl;
	}
	catch (Form::GradeTooLowException &e){
		std::cout << "\n" << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooHighException &e){
        std::cout << "\n" << e.what() << std::endl;}
	catch (std::exception &e){
		std::cout << "\n" << "Houston we have a problem" << std::endl;}

}