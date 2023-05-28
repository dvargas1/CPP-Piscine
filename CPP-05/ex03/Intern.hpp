/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 08:09:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/28 19:16:42 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_CLASS
#define INTERN_CLASS
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
public:
    Intern();
    Intern(Intern const &cp);
    ~Intern();
    Intern& operator=(Intern const &cp);
    AForm *makeForm(std::string type, std::string target);
    typedef AForm *(Intern::*Func)(std::string target);
private:
    AForm *pardon(std::string target);
    AForm *robotomy(std::string target);
    AForm *shrubbery(std::string target);
    Func FormList[3];
    static const std::string possibleForms[3];
    static const std::string formsName[3];
};



#endif