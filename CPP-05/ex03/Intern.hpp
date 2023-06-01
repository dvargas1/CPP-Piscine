/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 08:09:01 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/31 21:41:50 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_CLASS
#define INTERN_CLASS
#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern;

typedef AForm *(Intern::*Func)(std::string target);

struct Form {
    std::string id;
    std::string name;
    Func func;
};

class Intern {
public:
    Intern();
    Intern(Intern const &cp);
    ~Intern();
    Intern& operator=(Intern const &cp);
    AForm *makeForm(std::string type, std::string target);
private:
    AForm *pardon(std::string target);
    AForm *robotomy(std::string target);
    AForm *shrubbery(std::string target);
    static const Form FormList[];
};



#endif