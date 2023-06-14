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
BitcoinExchange::BitcoinExchange(std::string file) : dbName(file) 
    createDB();
}
BitcoinExchange::BitcoinExchange(BitcoinExchange const &cp) : dbName(cp.dbName) {
    btcDb = cp.btcDb;
}
BitcoinExchange BitcoinExchange::operator=(BitcoinExchange const &cp) {
    if (this != &cp)
    {
        dbName = cp.dbName;
        btcDb = cp.btcDb;
    }
    return *this;
}

std::map<std::string, double> &BitcoinExchange::getDB() { return btcDb; }

void BitcoinExchange::createDB() {
    std::ifstream file(dbName.c_str());
    if (!file)
        throw std::invalid_argument("Invalid file name");
    std::string firstLine;
    std::getline(file, firstLine);

    std::string line;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        if (std::getline(iss, dateStr, ',') && std::getline(iss, rateStr))
        {
            if (!dateStr.empty() && !rateStr.empty())
            {
                try
                {
                    validateString(line);
                    double rate = std::atof(rateStr.c_str());
                    btcDb[dateStr] = rate;
                }
                catch (const std::exception &e)
                {
                    std::cerr << e.what() << '\n';
                    std::abort();
                }
            }
        }
        else
            throw std::runtime_error("Line is Wrong");
    }
}

bool BitcoinExchange::isNumber(const std::string& str) {
    std::istringstream iss(str);
    double number;
    return (iss >> number) && (iss.eof());
}

void BitcoinExchange::validateString(std::string str) {
    if (str.size() < 11)
        throw std::length_error("String too small");
    if (str[4] != '-' || str[7] != '-')
        throw std::logic_error("Wrong string");
    std::istringstream iss(str);
    int year, month, day;
    char separator;
    std::string nb;
    if (!(iss >> year >> separator >> month >> separator >> day >> separator >> nb))
        throw std::logic_error("Wrong string");
    if ((year >= 0 && year <= 9999) && (month >= 1 && month <= 12) && 
            (day >= 1 && day <= 31)) {
        if (!isNumber(nb))
            throw std::logic_error("Invalid number: " + nb);
        return;
        }
    throw std::logic_error("Wrong string");
}

void BitcoinExchange::compareNPrint(std::string date, double valueDB, double valueInput) {
    if (valueInput == BADINPUT)
        std::cout << "Error: bad input => " << date << std::endl;
    else if (valueInput == TOOLARGE)
        std::cout << "Error: too large a number." << std::endl;
    else if (valueInput == NEGATIVENB)
        std::cout << "Error: not a positive number." << std::endl;
    else
    {
        double result = valueDB * valueInput;
        std::cout << date << " => " << valueInput << " = " << result << std::endl;
    }
}

bool BitcoinExchange::dateDiff(std::string date1, std::string date2) {
    std::tm tm1 = {};
    std::tm tm2 = {};
    sscanf(date1.c_str(), "%d-%d-%d", &tm1.tm_year, &tm1.tm_mon, &tm1.tm_mday);
    sscanf(date2.c_str(), "%d-%d-%d", &tm2.tm_year, &tm2.tm_mon, &tm2.tm_mday);
    time_t time1 = std::mktime(&tm1);
    time_t time2 = std::mktime(&tm2);
    return time1 < time2;
}

void BitcoinExchange::makeExchange(std::map<std::pair<int, std::string>, double> &input) {
    std::map<std::string, double>::iterator itDb = btcDb.begin();
    std::map<std::pair<int, std::string>, double>::iterator itInput = input.begin();

    int inputSize = input.size();
    int i = 0;
    while (i < inputSize)
    {
        std::string date = itInput->first.second;
        date.erase(date.find_last_not_of(" ") + 1);
        double valueInput = itInput->second;
        itDb = btcDb.find(date);
        double valueItdb = itDb->second;
        if (itDb != btcDb.end())
            compareNPrint(date, valueItdb, valueInput);
        else
        {
            if(valueInput < 0)
                compareNPrint(date, valueItdb, valueInput);
            else {
                itDb = btcDb.lower_bound(date);
                valueItdb = itDb->second;
                if(itDb == btcDb.begin())
                    compareNPrint(date, valueItdb, valueInput);
                else if(itDb == btcDb.end())
                    compareNPrint(date, valueItdb, valueInput);
                else{
                    std::map<std::string, double>::const_iterator itLow = itDb;
                    --itLow;
                    std::string lowerDate = itLow->first;
                    std::string upperDate = itDb->first;
                    if (dateDiff(lowerDate, upperDate) == true)
                        compareNPrint(date, itLow->second, valueInput);
                    else
                        compareNPrint(date, itInput->second, valueInput);
                }
         }
        }
        ++itInput;
        i++;
    }
}