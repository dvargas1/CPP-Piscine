/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:29:35 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/10 00:11:13 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_CLASS
#define BITCOINEXCHANGE_CLASS

#include <map>
#include <string>
#include <algorithm>
#include <fstream>
#include <sstream>
#include <iostream>
#include <ctime>
#include <utility>
#define BADINPUT -1
#define TOOLARGE -2
#define NEGATIVENB -3

class BitcoinExchange {
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(std::string file);
    BitcoinExchange (BitcoinExchange const &cp);
    BitcoinExchange& operator=(BitcoinExchange const &cp);
    void createDB();
    std::map<std::string, double> &getDB();
    void makeExchange(std::map<std::pair<int, std::string>, double> &input);
    void validateString(std::string line);
    void compareNPrint(std::string date, double valueDB, double valueInput);
    bool dateDiff(std::string date1, std::string date2);
    bool isNumber(const std::string& str);
    
private:
    std::map<std::string, double> btcDb;
    std::string dbName;
};
#endif