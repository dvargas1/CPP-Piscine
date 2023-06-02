/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 20:05:35 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/01 09:01:30 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_CLASS
#define SCALARCONVERTER_CLASS

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <cstdlib>

class ScalarConverter {
public:
    ScalarConverter();
    ScalarConverter(std::string literal);
    ScalarConverter(ScalarConverter const &cp);
    ~ScalarConverter();
    ScalarConverter& operator=(ScalarConverter const &cp);
    static void convert(std::string literal);
    static bool isSpecial(std::string literal);
    static bool isCharLiteral(std::string s);
    static bool isIntLiteral(std::string s);
    static bool isFloatLiteral(std::string s);
    static bool isDoubleLiteral(std::string s);
    static void convertToChar(std::string s);
    static void convertToInt(std::string s);
    static void convertToFloat(std::string s);
    static void convertToDouble(std::string s);
    static void printSpecialCase(std::string s);
    static void printChar(std::string s);
private:
    std::string literal;
};


#endif