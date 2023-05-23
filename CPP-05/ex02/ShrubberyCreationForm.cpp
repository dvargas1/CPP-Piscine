/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 22:31:22 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/22 23:23:36 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

    ShrubberyCreationForm::ShrubberyCreationForm(): AForm("ShrubberyCreation", 145, 137), target("undefined") { }
    ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreation", 145, 137), target(target) {}
    ShrubberyCreationForm::~ShrubberyCreationForm(){}
    ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cp) : AForm("ShrubberyCreation", 145, 137),target(cp.getTarget()){}
    ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cp){
        if(this != &cp){
            target = cp.getTarget();
        }
        return *this;
    }
    std::string ShrubberyCreationForm::getTarget() const{ return target; }
void ShrubberyCreationForm::toExecute(){
    std::ofstream file;
    std::string filename = target + "_shrubbery";
    file.open(filename.c_str());
    file  << "     /\\     " << std::endl;
    file  << "    //\\\\    " << std::endl;
    file  << "   //  \\\\   " << std::endl;
    file  << "  //    \\\\  " << std::endl;
    file  << " //______\\\\ " << std::endl;
    file  << "     ||     " << std::endl;
    file  << "     ||     " << std::endl;
    file  << "     ||     " << std::endl;
    file  << "_____||_____" << std::endl;
    file.close();
}