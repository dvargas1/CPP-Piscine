/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:18:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/18 09:08:52 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_CLASS
#define FORM_CLASS

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
public:
    Form();
    Form(std::string name);
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
    void validateGrade();
    
private:
    std::string const name;
    bool sign;
    int const signGrade = 100;
    int const executeGrade = 20;
}

std::ostream &operator<<(std::ostream &io, Form const &cp);




#endif