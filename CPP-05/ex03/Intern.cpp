/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 08:15:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/28 19:31:56 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
    FormList[0] = &Intern::shrubbery;
    FormList[1] = &Intern::robotomy;
    FormList[2] = &Intern::pardon;
}
Intern::~Intern() {}
Intern::Intern(Intern const &cp) {
    (void)cp;
}
Intern& Intern::operator=(Intern const &cp){
    (void)cp;
    return (*this);   
}
AForm *Intern::pardon(std::string target){
    return new PresidentialPardonForm(target);
}

AForm *Intern::robotomy(std::string target){
    return new RobotomyRequestForm(target);
}

AForm *Intern::shrubbery(std::string target){
    return new ShrubberyCreationForm(target);
}

const std::string Intern::formsName[] = {"Shrubbery Creation Form", 
                                        "Robotomy Request Form", 
                                        "Presidential Pardon Form"
};

const std::string Intern::possibleForms[] = {"shrubbery creation", 
                                            "robotomy request", 
                                            "presidential pardon"
};

AForm *Intern::makeForm(std::string type, std::string target) {
    int i = 0;
    for(; i < 3; i++)
        if (type == possibleForms[i])
            break;
    Func a = FormList[i];
    if (!a)
        throw std::invalid_argument("invalid form name");
    AForm *ret = (this->*a)(target);
    std::cout << "Intern creates " << formsName[i] << std::endl;
    return ret;
}