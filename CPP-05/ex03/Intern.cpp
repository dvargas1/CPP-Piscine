/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 08:15:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/08 17:22:50 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
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

AForm *Intern::makeForm(std::string type, std::string target) {
    Form FormList[] = {
    { "shrubbery creation",  "Shrubbery Creation Form",  &Intern::shrubbery },
    { "robotomy request",    "Robotomy Request Form",    &Intern::robotomy  },
    { "presidential pardon", "Presidential Pardon Form", &Intern::pardon  }
};
    size_t i = 0;
    size_t totalFormNum = sizeof(FormList) / sizeof(Form);
    for(; i < totalFormNum; i++)
        if (type == FormList[i].id)
            break;
    Func a = FormList[i].func;
    if (!a)
        throw std::invalid_argument("invalid form name");
    AForm *ret = (this->*a)(target);
    std::cout << "Intern creates " << FormList[i].func << std::endl;
    return ret;
}