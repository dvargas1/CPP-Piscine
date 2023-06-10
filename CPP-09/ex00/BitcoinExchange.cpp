/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:11:25 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/10 00:13:26 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange() : dbName("data.csv") { 
        createDB();  
}
BitcoinExchange::BitcoinExchange(std::string file) : dbName(file) {
        createDB();  
}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cp) : dbName(cp.dbName) {
    btcDb = cp.btcDb;
}
BitcoinExchange BitcoinExchange::operator=(BitcoinExchange const &cp) {
    if(this != &cp){
        dbName = cp.dbName;
        btcDb = cp.btcDb;
    }
    return *this;
}

std::map<std::string, double>& BitcoinExchange::getDB () { return btcDb; }

void BitcoinExchange::createDB() {
    std::ifstream file(dbName.c_str());
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
                    btcDb[dateStr] = rate;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
                
            }
        }
    }
}

void compareNPrint(std::string date, double valueDB, double valueInput) {
    if(valueInput == BADINPUT)
        std::cout << "Error: bad input => " << date << std::endl;
    else if(valueInput  == TOOLARGE)
        std::cout << "Error: too large a number." << std::endl;
    else if(valueInput < 0)
        std::cout << "Error: not a positive number." << std::endl;
    else{
        double result = valueDB * valueInput;
        std::cout << date << " => " << valueInput << " = " << result << std::endl;
    }
}

bool dateDiff(std::string date1, std::string date2) {
    std::tm tm1 = {};
    std::tm tm2 = {};

    sscanf(date1.c_str(), "%d-%d-%d", &tm1.tm_year, &tm1.tm_mon, &tm1.tm_mday);
    sscanf(date2.c_str(), "%d-%d-%d", &tm2.tm_year, &tm2.tm_mon, &tm2.tm_mday);

    time_t time1 = std::mktime(&tm1);
    time_t time2 = std::mktime(&tm2);

    return time1 < time2;
}

void BitcoinExchange::makeExchange(std::map<std::string, double> &input) {
    std::map<std::string, double>::const_iterator itDb = btcDb.begin();
    std::map<std::string, double>::const_iterator itInput = input.begin();

    while(itInput != input.end()) {
        const std::string date = itInput->first;
        double valueInput = itInput->second;
        
        itDb = btcDb.find(date);
        if (itDb != btcDb.end()){
            double valueItdb = itDb->second;
            compareNPrint(date, valueItdb, valueInput);
        }
        else {
            itDb = btcDb.lower_bound(date);
            if(itDb == input.begin())
                compareNPrint(date, valueInput, valueInput);
            else if(itDb == input.end()) {
                --itInput;
                compareNPrint(date, itDb->second, valueInput);
            }
            else {
                std::map<std::string, double>::const_iterator itLow = itDb;
                --itLow;
                std::string lowerDate = itLow->first;
                std::string upperDate = itDb->first;

                if(dateDiff(lowerDate, upperDate) == true )
                    compareNPrint(date, itLow->second, valueInput);
                else
                    compareNPrint(date, itInput->second, valueInput);
            }
        }
        ++itInput;
    }
}