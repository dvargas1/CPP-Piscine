/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:24:46 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/18 09:10:41 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : sign(false), name("unnamed"), signGrade(100), executeGrade(20){}
Form::Form(std::string name) : sign(false), name(name){}
Form::Form(std::string name) : sign(false), name(name), signGrade(signGrade), executeGrade(executeGrade){}

Form::~Form(){}

Form::Form(Form const &cp) : sign(cp.isSign()), name(cp.getName()), signGrade(cp.getExecuteGrade()), executeGrade(cp.getExecuteGrade()){}
Form  &Form::operator=(Form const &cp){
    if(this != &cp){
        this->sign = cp.isSign();
        this->name = cp.getName();
        this->signGrade = cp.getSignGrade();
        this->executeGrade = cp.executeGrade();
    }
    return *this;
}

std::string Form::getName() const{ return name; }
bool Form::isSign() const { return sign; }
int Form::getSignGrade() const{ return signGrade; }
int Form::getExecuteGrade() const{ return executeGrade; }

void Form::beSigned(Bureaucrat b){
    if(b.getGrade() >= signGrade )
        throw GradeTooLowException();
    sign = true;
}
Form::GradeTooHighException::GradeTooHighException() : std::logic_error("Grade Too High, 1"){}
Form::GradeTooLowException::GradeTooLowException() : std::logic_error("Grade Too Low, 150"){}
void Form::validateGrade(){
    if(signGrade < 150 || executeGrade < 150)
        throw GradeTooHighException();
    if(signGrade > 1 || executeGrade > 1)
        throw GradeTooHighException();
}

std::ostream &operator<<(std::ostream &io, Form const &cp){
    io << "Form name: " <<cp.getName() << "\n" << "Sign Grade:"<<cp.getSignGrade()<<"\n"<< "Execute Grade:"<<cp.getExecuteGrade()<<"Status: "<< (cp.isSign() ? "signed" : "unsigned")<<std::endl;
    
}