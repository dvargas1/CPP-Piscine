/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:11:25 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/08 19:09:29 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : fileName("standard.txt") {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(std::string file) : fileName(file) {}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cp) : fileName(cp.fileName) {}
BitcoinExchange BitcoinExchange::operator=(BitcoinExchange const &cp) {
    if(this != &cp){
        fileName = cp.fileName;
        exchangeRate = cp.exchangeRate;
    }
    return *this;
}

void BitcoinExchange::createDB(std::string fileName) {
    std::ifstream file(fileName.c_str());
    if (!file)
        throw std::invalid_argument("Invalid file name");
    std::string line;
    while(std::getline(file,line)){
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        if (std::getline(iss, dateStr, ',') && std::getline(iss, rateStr)) {
            if(!dateStr.empty() && !rateStr.empty()){
                try
                {
                    double rate = std::atof(rateStr.c_str());
                    exchangeRate[dateStr] = rate;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                
            }
        }

    }
    
}

void BitcoinExchange::printDB(){
    std::map<std::string, double>::const_iterator it;
    for (it = exchangeRate.begin(); it != exchangeRate.end(); ++it) {
        std::cout<< "\nDate: " << it->first << "\nValue: " << it->second << std::endl;
    }
}