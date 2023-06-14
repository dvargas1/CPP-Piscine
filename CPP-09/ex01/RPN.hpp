/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:37:37 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/14 08:25:08 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CLASS
#define RPN_CLASS

#include <iostream>
#include <stack>
#include <cstdlib>

class RPN {
public:
    RPN();
    RPN(std::string input);
    ~RPN();
    RPN(RPN &cp);
    RPN operator=(RPN &cp);
    std::string getInput() const;
    double getResult() const;
    std::stack<int> getStack() const;

private:
    std::string input;
    std::stack<int> stack;
    int result;
    void checkInput();
    void sum();
    void minus();
    void multi();
    void division();
    void doTheMath();
};

#endif