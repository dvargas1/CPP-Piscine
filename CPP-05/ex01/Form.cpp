/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:24:46 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 09:11:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :  name("unnamed"), sign(false), signGrade(100), executeGrade(20){}
Form::Form(std::string name, int signGrade, int executeGrade) : name(name),sign(false), signGrade(signGrade), executeGrade(executeGrade) {
    validateGrade();
}

Form::~Form(){}

Form::Form(Form const &cp) : name(cp.getName()),sign(cp.isSign()), signGrade(cp.getExecuteGrade()), executeGrade(cp.getExecuteGrade()){}
Form  &Form::operator=(Form const &cp){
    if(this != &cp){   
        Form tmp(cp);
        *this = tmp;
    }
    return *this;
}

std::string Form::getName() const{ return name; }
bool Form::isSign() const { return sign; }
int Form::getSignGrade() const{ return signGrade; }
int Form::getExecuteGrade() const{ return executeGrade; }

void Form::beSigned(Bureaucrat b){
    if(b.getGrade() > signGrade )
        throw GradeTooLowException();
    if(sign == true)
        throw AlreadySignException();
    sign = true;
}
Form::GradeTooHighException::GradeTooHighException() : std::logic_error("Grade Too High\n"){}
Form::GradeTooLowException::GradeTooLowException() : std::logic_error("Grade Too Low\n"){}
Form::AlreadySignException::AlreadySignException() : std::logic_error("This form is already signed\n"){}

void Form::validateGrade(){
    if(signGrade > 150 || executeGrade > 150)
        throw GradeTooLowException();
    if(signGrade < 1 || executeGrade < 1)
        throw GradeTooHighException();
}

std::ostream &operator<<(std::ostream &io, Form const &cp){
    io << "Form name: " <<cp.getName() << "\nSign Grade:"<<cp.getSignGrade()<< "\nExecute Grade:"<<cp.getExecuteGrade()<<"\nStatus: "<< (cp.isSign() ? "signed" : "unsigned")<<std::endl;
    return io;
}