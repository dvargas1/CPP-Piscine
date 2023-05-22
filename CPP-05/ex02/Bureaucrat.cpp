/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 07:18:38 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 15:38:07 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : name(name){\
  setGrade(grade);
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat& cp) : name(cp.getName()), grade(cp.getGrade())  {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& cp) {
  if (this != &cp) {
    grade = cp.getGrade();
  }
  return *this;
}
void Bureaucrat::setGrade(int grade) {
  if (grade < 1) {
    throw GradeTooHighException();
  } else if (grade > 150) {
    throw GradeTooLowException();
  }
  this->grade = grade;
}

std::string const Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const{ return grade; }

void Bureaucrat::gradeIncrement() {
  if(grade - 1 < MAX_GRADE)
    throw GradeTooHighException();
  setGrade(grade - 1);
}
void Bureaucrat::gradeDecrement() {
  if(grade + 1 > MIN_GRADE)
    throw GradeTooLowException();
  setGrade(grade + 1);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::logic_error("Grade Too High, maximum grade is 1"){}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::logic_error("Grade Too Low, minimum grade is 150"){}

void Bureaucrat::signForm(AForm& form){
  try
  { 
    form.beSigned(*this);
    std::cout<<name<<" signed "<<form.getName() << std::endl;
  }
  catch(std::exception &e){
    std::cout<<name<<" could't sign "<<form.getName()<<" because " << e.what()<<std::endl;}
}


std::ostream &operator<<(std::ostream &io, Bureaucrat const &cp){
  io << cp.getName() <<", bureucrat grade "<< cp.getGrade()<< std::endl;
  return io;
}