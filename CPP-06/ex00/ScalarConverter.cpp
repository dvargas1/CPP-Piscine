/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 07:31:12 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/29 08:28:39 by dvargas          ###   ########.fr       */
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
    if(s.length() == 3 && s[0] == '\'' && s[2] == '\'')
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
    size_t pos = 0;
    std::atof(s.c_str());
    if (s.find('.', pos) != std::string::npos) {
        return true;
    }
    return false;
}
bool ScalarConverter::isDoubleLiteral(std::string s) {
    size_t pos = 0;
    std::atof(s.c_str());
    if (s.find('.', pos) != std::string::npos) {
        return true;
    }
    return false;
}
void ScalarConverter::convertToChar(std::string s) {
    std::cout << "Char: " << s[1] << std::endl;
    std::cout << "Int: " << static_cast<int>(s[1]) << std::endl;
    std::cout << "Float" << static_cast<float>(s[1]) << std::endl;
    std::cout << "Double" << static_cast<double>(s[1]) << std::endl;
}
void ScalarConverter::convertToInt(std::string s) {
    int value = std::atoi(s.c_str());
    std::cout << "Char: " << static_cast<char>(value) << std::endl;
    std::cout << "Int: " << value << std::endl;
    std::cout << "Float" << static_cast<float>(value) << std::endl;
    std::cout << "Double" << static_cast<double>(value) << std::endl;
}
void ScalarConverter::convertToFloat(std::string s) {
    float value = std::atof(s.c_str());
    if(isprint(static_cast<char>(value)))
        std::cout << "Char: " << static_cast<char>(value) << std::endl;
    else
        std::cout << "Char: Not displayable" << std::endl;
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << "Float" << value << std::endl;
    std::cout << "Double" << static_cast<double>(value) << std::endl;
    
}
void ScalarConverter::convertToDouble(std::string s) {
    double value = std::atof(s.c_str());
    if(isprint(static_cast<char>(value)))
        std::cout << "Char: " << static_cast<char>(value) << std::endl;
    else
        std::cout << "Char: Not displayable" << std::endl;
    std::cout << "Int: " << static_cast<int>(value) << std::endl;
    std::cout << "Float" << static_cast<float>(value) << std::endl;
    std::cout << "Double" << value << std::endl;
}
void ScalarConverter::convert(std::string literal) {
    if(isCharLiteral(literal)){
        convertToChar(literal);
    }
    else if(isIntLiteral(literal)){
        convertToInt(literal);
    }
    else if(isFloatLiteral(literal)){
        convertToFloat(literal);
    }
    if(isDoubleLiteral(literal)){
        convertToDouble(literal);
    }
    else
        std::cout << "ELSE DO CONVERTER - se fudeu" << std::endl;
}