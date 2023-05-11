/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 07:11:49 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/11 07:17:37 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREUCRAT_CLASS
#define BUREUCRAT_CLASS

#include <iostream>

class Bureucrat {
public:
    Bureucrat(int grade);
    ~Bureucrat();
    Bureucrat(Bureucrat const &cp);
    Bureucrat& operator=(Bureucrat const &cp);
    std::string getName() const;
    int getGrade() const;
    void gradeIncrement();
    int gradeDecrement();
    Bureucrat *operator<<(Bureucrat const &cp);
private:
    std::string name const;
    int grade;
};