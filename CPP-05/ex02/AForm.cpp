/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:24:46 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 15:38:19 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :  name("unnamed"), sign(false), signGrade(100), executeGrade(20){}
AForm::AForm(std::string name, int signGrade, int executeGrade) : name(name),sign(false), signGrade(signGrade), executeGrade(executeGrade) {
    validateGrade();
}

AForm::~AForm(){}
AForm::AForm(AForm const &cp) : name(cp.getName()),sign(cp.isSign()), signGrade(cp.getExecuteGrade()), executeGrade(cp.getExecuteGrade()){}
AForm  &AForm::operator=(AForm const &cp){
    if(this != &cp){   
        AForm tmp(cp);
        *this = tmp;
    }
    return *this;
}

std::string AForm::getName() const{ return name; }
bool AForm::isSign() const { return sign; }
int AForm::getSignGrade() const{ return signGrade; }
int AForm::getExecuteGrade() const{ return executeGrade; }

void AForm::beSigned(Bureaucrat b){
    if(b.getGrade() > signGrade )
        throw GradeTooLowException();
    if(sign == true)
        throw AlreadySignException();
    sign = true;
}
AForm::GradeTooHighException::GradeTooHighException() : std::logic_error("Grade Too High\n"){}
AForm::GradeTooLowException::GradeTooLowException() : std::logic_error("Grade Too Low\n"){}
AForm::AlreadySignException::AlreadySignException() : std::logic_error("This Aform is already signed\n"){}

void AForm::validateGrade(){
    if(signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if(signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
}

std::ostream &operator<<(std::ostream &io, AForm const &cp){
    io << "AForm name: " <<cp.getName() << "\nSign Grade:"<<cp.getSignGrade()<< "\nExecute Grade:"<<cp.getExecuteGrade()<<"\nStatus: "<< (cp.isSign() ? "signed" : "unsigned")<<std::endl;
    return io;
}