/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 15:53:26 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	//Form errorWithGrade("Medical issue", 180, 20);

// Increment
	AForm a("Atestado Medico", 15, 50);
    Bureaucrat	daniel("Daniel", 22);
	std::cout << daniel << std::endl;
	std::cout << a<< std::endl;

	try
	{
		for (int cur = 0; cur < 3; cur++)
		{
			std::cout<<cur<< " tentative"<<std::endl;
			daniel.gradeIncrement();
			daniel.signForm(a);
			std::cout << daniel << std::endl;
			std::cout << a<< std::endl;
			std::cout<<"----------------"<<std::endl;
		}
	}
	catch (AForm::GradeTooLowException &e){
		std::cout << "\n" << e.what() << std::endl;}
	catch (Bureaucrat::GradeTooHighException &e){
        std::cout << "\n" << e.what() << std::endl;}
	catch (std::exception &e){
		std::cout << "\n" << "Houston we have a problem" << std::endl;}
/*
    std::cout<<"\nDecrement Error ->"<<std::endl;
// Decrement Error
    Bureaucrat	luna("Luna", 147);
	std::cout << luna << std::endl;
	try
	{
		for (int cur = 147; cur < 151; cur++)
		{
			luna.gradeDecrement();
			std::cout << "" << luna << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooLowException &e){
		std::cout << "\n" << e.what() << std::endl;}
    catch (std::exception &e){
		std::cout << "\n" << "Houston we have a problem" << std::endl;}
 


// Construction Error
    std::cout<<"\nconstructor failure with THROW ->"<<std::endl;
	try
	{
		Bureaucrat	avaliator("youarebeautiful", 151);
		std::cout << avaliator << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Generic error message" << std::endl;
	}

    try
	{
		Bureaucrat	avaliator2("youarebeautiful", -1);
		std::cout << avaliator2 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Generic error message" << std::endl;
	}
	return 0;    
	*/
}