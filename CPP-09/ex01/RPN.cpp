/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:42:17 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/13 22:57:17 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() : input(""), result(0) {}
RPN::RPN(std::string input) : input(input), result(0) {
    createStackAndList();
    for(size_t i = 0; i < operandList.length(); ++i)
        std::cout<< "Print1" << operandList[i] << std::endl;
    printStack();
    std::cout << "Now the final result ->";
    doTheMath();
}
RPN::~RPN() {};
RPN::RPN(RPN &cp) : input(cp.getInput()), operandList(cp.getList()), result(cp.getResult()) {
    stack = cp.stack;
}
RPN RPN::operator=(RPN &cp) {
    if(this != &cp) {
        input = cp.input;
        operandList = cp.operandList;
        stack = cp.stack;
        result = cp.result;
    }
    return *this;
}
std::string RPN::getInput() const { return input; }
double RPN::getResult() const { return result; }
std::stack<int> RPN::getStack() const {return stack; }
std::string RPN::getList() const {return operandList; }

void RPN::printStack() {
    std::stack<int> tempStack = stack; // Cria uma cópia temporária da pilha

    std::cout << "Conteúdo da pilha: ";

    while (!tempStack.empty()) {
        std::cout << tempStack.top() << " ";
        tempStack.pop();
    }
    std::cout << std::endl;
}

void RPN::reverseStack() {
    std::stack<int> tempStack;

    while (!stack.empty()) {
        tempStack.push(stack.top());
        stack.pop();
    }
    stack = tempStack;
}

void RPN::createStackAndList() {
    for (size_t i = 0; i < input.length(); ++i) {
        char c = input[i];
        if (isdigit(c)) {
            stack.push(c - '0');  // Converte o dígito em número
        } 
        else if (c == '+' || c == '-' || c == '*' || c == '/') {
            operandList += c;
        }
        else if (c == 'a') {
            ++i;
        }
        else
            operandList += 'a';
    }
    reverseStack();
}

void RPN::doTheMath() {
    while (!operandList.empty()) {
        if (operandList.find('a')){
            throw std::logic_error("DEU RUIM");
            break;
        }
        //std::cout << "\nNEXT -> " << std::endl;
        char op = operandList[0];
       // std::cout << op << std::endl;
        operandList.erase(0, 1);
        
        int operand2 = stack.top();
       // std::cout << operand2 << std::endl;
        stack.pop();
        
        int operand1 = stack.top();
        //std::cout << operand1 << std::endl;
        stack.pop();
        
        int result;
        switch (op) {
            case '+':
                result = operand2 + operand1;
                break;
            case '-':
                result = operand2 - operand1;
                break;
            case '*':
                result = operand2 * operand1;
                break;
            case '/':
                result = operand2 / operand1;
                break;
            default:
                std::cerr << "Operador inválido: " << op << std::endl;
                return;
        }
        
        stack.push(result);
    }
    
    result = stack.top();
    stack.pop();
}