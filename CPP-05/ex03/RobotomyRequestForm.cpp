/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 07:38:34 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/23 08:13:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotoRequest", 72, 45), target("unnamed"){}
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotoRequest", 72, 45), target(target){}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cp) : AForm("RobotoRequest", 72, 45), target(cp.getTarget()){}
RobotomyRequestForm::~RobotomyRequestForm(){}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cp){
    if(this != &cp){
        target = cp.getTarget();
    }
    return *this;
}
    std::string RobotomyRequestForm::getTarget() const{ return target; }
    
void RobotomyRequestForm::toExecute() const {
    std::srand(std::time(0));
    std::cout << "\n******* Make some drilling noises ******" << std::endl;
    std::string success = target + " has been robotomizes successfully!";
    std::string fail = "Robotomy failed, " + target + " is dead";
    std::cout << (std::rand() % 2 ? success : fail) << std::endl;
}