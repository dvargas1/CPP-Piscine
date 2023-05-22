/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:18:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 08:53:01 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS
#define FORM_CLASS

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form {
public:
    Form();
    Form(std::string name, int signGrade, int executeGrade);
    ~Form();
    Form(Form const &cp);
    Form& operator=(Form const &cp);
    std::string getName()const ;
    bool isSign()const ;
    int getSignGrade()const ;
    int getExecuteGrade()const ;
    void beSigned(Bureaucrat b);
    class GradeTooHighException : public std::logic_error {
    public:
        GradeTooHighException();
    };
    class GradeTooLowException : public std::logic_error {
    public:
        GradeTooLowException();
    };
    class AlreadySignException : public std::logic_error {
    public:
        AlreadySignException();
    };
    void validateGrade();
    
private:
    std::string const name;
    bool sign;
    int const signGrade;
    int const executeGrade;
};
std::ostream& operator<<(std::ostream &io, Form const &cp);




#endif