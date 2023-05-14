/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 08:00:13 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/14 08:29:30 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    std::cout<<"\nIncrement Error"<<std::endl;
// Increment Error
    Bureaucrat	daniel("Daniel", 3);
	std::cout << daniel << std::endl;

	try
	{
		for (int cur = 0; cur < 3; cur++)
		{
			daniel.gradeIncrement();
			std::cout << "" << daniel << std::endl;
		}
	}
	catch (Bureaucrat::GradeTooHighException &e){
        std::cout << "\n" << e.error() << std::endl;}
	catch (std::exception &e){
		std::cout << "\n" << "Houston we have a problem" << std::endl;}

    std::cout<<"\nDecrement Error"<<std::endl;
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
		std::cout << "\n" << e.error() << std::endl;}
    catch (std::exception &e){
		std::cout << "\n" << "Houston we have a problem" << std::endl;}



// Construction Error
    std::cout<<"\nconstructor failure with THROW"<<std::endl;
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

    
}