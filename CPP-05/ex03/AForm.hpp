/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 08:18:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/19 08:53:01 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_CLASS
#define AFORM_CLASS

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class AForm {
public:
    AForm();
    AForm(std::string name, int signGrade, int executeGrade);
    virtual ~AForm();
    AForm(AForm const &cp);
    AForm& operator=(AForm const &cp);
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
    class NotSignException : public std::logic_error {
    public:
        NotSignException();
    };
    void validateGrade();
    void execute(Bureaucrat const & executor) const;
protected:
    virtual void toExecute() const = 0;
private:
    std::string const name;
    bool sign;
    int const signGrade;
    int const executeGrade;
};
std::ostream& operator<<(std::ostream &io, AForm const &cp);




#endif