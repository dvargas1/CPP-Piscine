/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:37:37 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/13 22:49:27 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_CLASS
#define RPN_CLASS

#include <iostream>
#include <stack>

class RPN {
public:
    RPN();
    RPN(std::string input);
    ~RPN();
    RPN(RPN &cp);
    RPN operator=(RPN &cp);
    std::string getInput() const;
    std::string getList() const;
    double getResult() const;
    std::stack<int> getStack() const;
    void reverseStack();
    void printStack();

private:
    std::string input;
    std::string operandList;
    std::stack<int> stack;
    int result;
    void createStackAndList();
    void doTheMath();
};

#endif