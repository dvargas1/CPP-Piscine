/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 07:31:12 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/01 09:20:18 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


ScalarConverter::ScalarConverter() : literal("unnamed"){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(std::string literal) : literal(literal) {}
ScalarConverter::ScalarConverter(ScalarConverter const &cp) : literal(cp.literal) {
}
ScalarConverter& ScalarConverter::operator=(ScalarConverter const &cp){
    if(this != &cp)
        literal = cp.literal;
    return *this;
}
bool ScalarConverter::isCharLiteral(std::string s) {
    if(s.length() == 1 && isalpha(s[0]))
        return true;
    return false;
}
bool ScalarConverter::isIntLiteral(std::string s) {
    for (size_t i = 0; i < s.length(); i++) {
        if (!std::isdigit(s[i]) && s[i] != '-' && s[i] != '+') {
            return false;
        }
    }
    return true;
}
bool ScalarConverter::isFloatLiteral(std::string s) {
    if(s.length() > 1 && s[s.length() - 1] == 'f'){
        size_t pos = 0;
        std::atof(s.c_str());
        if (s.find('.', pos) != std::string::npos) {
            return true;
        }
    }
    return false;
}
bool ScalarConverter::isDoubleLiteral(std::string s) {
    if(s.length() > 1 && s[s.length() - 1] != 'f'){
        size_t pos = 0;
        std::atof(s.c_str());
        if (s.find('.', pos) != std::string::npos) {
            return true;
        }
    }
    return false;
}

void ScalarConverter::printChar(std::string s) {
    int value = static_cast<int>(s[0]);
    if(value < 0 || value > 128)
        std::cout << "char: impossible" << std::endl;
    else if(value < 32 || value > 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "Char: " << "'" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::convertToChar(std::string s) {
    int value = static_cast<int>(s[0]);
    std::cout << value << std::endl;
    printChar(s);
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(2) << static_cast<double>(value) << std::endl;
}

void ScalarConverter::convertToInt(std::string s) {
    int value = std::atoi(s.c_str());
    printChar(s);
    std::cout << "Int: " << value << std::endl;
    std::cout << "Float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(2) << static_cast<double>(value) << std::endl;
}

void ScalarConverter::convertToFloat(std::string s) {
    float value = std::atof(s.c_str());
    printChar(s);
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << "Float: " << value << "f" << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(4) << static_cast<double>(value) << std::endl;
}

void ScalarConverter::convertToDouble(std::string s) {
    double value = std::atof(s.c_str());
    printChar(s);
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << "Float: " << std::fixed << std::setprecision(2) << static_cast<float>(value) << "f" << std::endl;
    std::cout << "Double: " << std::fixed << std::setprecision(4) << value << std::endl;
}

bool ScalarConverter::isSpecial(std::string s)
{
    if(s == "nan" || s == "-inf" || s == "+inf" ||
        s == "nanf" || s == "-inff" || s == "+inff")
        return true;
    return false;
}

void ScalarConverter::printSpecialCase(std::string literal){
    if (literal == "nan") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: nanf" << std::endl;
        std::cout << "Double: nan" << std::endl;
    }
    else if (literal == "-inf" || literal == "+inf") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << literal << "f" << std::endl;
        std::cout << "Double: " << literal << std::endl;
    }
    else if (literal == "nanf" || literal == "-inff" || literal == "+inff") {
        std::cout << "Char: impossible" << std::endl;
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << literal << std::endl;
        std::cout << "Double: " << literal << std::endl;
    }
}

void ScalarConverter::convert(std::string literal) {
    if(isSpecial(literal)){
        printSpecialCase(literal);
    }
    else if(isCharLiteral(literal)){
        std::cout << "asdasdasda" << std::endl;
        convertToChar(literal);
    }
    else if(isIntLiteral(literal)){
        convertToInt(literal);
    }
    else if(isFloatLiteral(literal)){
        convertToFloat(literal);
    }
    else if(isDoubleLiteral(literal)){
        convertToDouble(literal);
    }
    else
        throw(std::range_error("wrong input"));
}