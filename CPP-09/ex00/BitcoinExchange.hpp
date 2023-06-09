/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:29:35 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/09 11:33:38 by dvargas          ###   ########.fr       */
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
#include <ctime>
#define BADINPUT -1

class BitcoinExchange {
public:
    BitcoinExchange();
    ~BitcoinExchange();
    BitcoinExchange(std::string file);
    BitcoinExchange (BitcoinExchange const &cp);
    BitcoinExchange operator=(BitcoinExchange const &cp);
    void createDB();
    std::map<std::string, double> &getDB();
    void makeExchange(std::map<std::string, double> &input);
    
private:
    std::map<std::string, double> btcDb;
    std::string dbName;
};
#endif