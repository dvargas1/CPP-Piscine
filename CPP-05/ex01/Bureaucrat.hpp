/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 07:11:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 08:37:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS

#include <iostream>
#include "Form.hpp"
#define MIN_GRADE 150
#define MAX_GRADE 1

class Form;

class Bureaucrat {
public:
    Bureaucrat(std::string name, unsigned int grade);
    ~Bureaucrat();
    Bureaucrat(Bureaucrat const &cp);
    Bureaucrat& operator=(Bureaucrat const &cp);
    std::string const getName() const;
    int getGrade() const;
    void setGrade(int grade);
    void gradeIncrement();
    void gradeDecrement();
    class GradeTooHighException : public std::logic_error {
    public:
        GradeTooHighException();
    };
    class GradeTooLowException : public std::logic_error {
    public:
        GradeTooLowException();
    };
    void signForm(Form& form);
private:
    std::string const name;
    unsigned int grade;
};

    std::ostream &operator<<(std::ostream &io, Bureaucrat const &cp);

#endif