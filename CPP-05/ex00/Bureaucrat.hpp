/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 07:11:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/14 08:09:03 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_CLASS
#define BUREUCRAT_CLASS

#include <iostream>
#define MIN_GRADE 150
#define MAX_GRADE 1

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
    class GradeTooHighException : public std::exception {
    public:
        const char* error() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        const char* error() const throw();
    };
private:
    std::string const name;
    unsigned int grade;
};

    std::ostream &operator<<(std::ostream &io, Bureaucrat const &cp);

#endif