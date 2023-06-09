/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:29:35 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/08 18:59:40 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CLASS
#define BITOINEXCHANGE_CLASS

#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>

class BitcoinExchange {
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(std::string file);
    BitcoinExchange (BitcoinExchange const &cp);
    BitcoinExchange operator=(BitcoinExchange const &cp);
    void createDB(std::string fileName);
    bool validateLine(std::string line);
    bool validateDate(std::string date);
    bool validateValue(std::string date);
    void printDB();

    
private:
    std::map<std::string, double> exchangeRate;
    std::string fileName;
    

};
#endif