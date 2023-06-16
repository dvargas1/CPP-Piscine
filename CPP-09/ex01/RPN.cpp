/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:42:17 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/16 07:45:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : input(""), result(0) {}
RPN::RPN(std::string input) : input(input), result(0) {
    checkInput();
    doTheMath();
}
RPN::~RPN() {};
RPN::RPN(RPN &cp) : input(cp.getInput()), result(cp.getResult()) {
    stack = cp.stack;
}
RPN& RPN::operator=(RPN &cp) {
    if(this != &cp) {
        input = cp.input;
        stack = cp.stack;
        result = cp.result;
    }
    return *this;
}
std::string RPN::getInput() const { return input; }
double RPN::getResult() const { return result; }
std::stack<int> RPN::getStack() const {return stack; }

void RPN::checkInput() {
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (isdigit(c)) {
            if(isdigit(input[i + 1]))
                throw InputError();
            i++;
        } 
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            i++;
        }
        else if (isspace(c)) {
            continue;
        }
        else
            throw InputError();
    }
}

void RPN::sum() {
    if(stack.size() < 2)
        throw StackError();
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop(); 
    stack.push(a + b);
}

void RPN::minus() {
    if(stack.size() < 2)
        throw StackError();
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop(); 
    stack.push(b - a);  
}

void RPN::division() {
    if(stack.size() < 2)
        throw StackError();
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop(); 
    stack.push(b / a);
}

void RPN::multi() {
    if(stack.size() < 2)
        throw StackError();
    int a = stack.top();
    stack.pop();
    int b = stack.top();
    stack.pop(); 
    stack.push(a * b);
}


void RPN::doTheMath() {
    std::string i = getInput();
    std::string::iterator it = i.begin();
    for(;it != i.end();++it) {
        if(isdigit(*it)) {
            std::string s(1, *it);
            stack.push(atoi(s.c_str()));
        }
        if( *it == '+')
            sum();
        else if( *it == '-')
            minus();
        else if( *it == '/')
            division();
        else if( *it == '*' )
            multi();
        else if (*it == ' ')
            continue;
    }
    result = stack.top();
    stack.pop();
}