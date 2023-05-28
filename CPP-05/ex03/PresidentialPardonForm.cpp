/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 08:14:31 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/28 19:51:31 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardon", 25, 5), target("unnamed"){}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardon", 25, 5), target(target){}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cp) : AForm("PresidentialPardon", 25, 5), target(cp.getTarget()){}
PresidentialPardonForm::~PresidentialPardonForm(){}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &cp){
    if(this != &cp)
        target = cp.getTarget();
    return *this;
}
    std::string PresidentialPardonForm::getTarget() const { return target; }
void PresidentialPardonForm::toExecute() const {
    std::cout<< target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}