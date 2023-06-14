/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:56:21 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/10 00:13:11 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
bool isNegative(const std::string &str);
void printDB(std::map<std::string, double> DB);
std::map<std::pair<int, std::string>, double> *inputCreate(std::string fileName);
int ft_help();
void printDBDOUBLE(std::map<std::pair<std::string, int>, double> DB);
int main(int argc, char **argv) {
    if (argc != 2)
        return ft_help();
    std::map<std::pair<int, std::string>, double> *input = inputCreate(argv[1]);
    BitcoinExchange bitCoinTrader;
    //printDBDOUBLE(*input);
    bitCoinTrader.makeExchange(*input);
    delete input;
}

int ft_help() {
    std::cout << "Usage: ./btc \"Your input file\"" << std::endl;
    std::cout << "the input file should be formatted like this:" << std::endl;
    std::cout << "date | value" << std::endl;
    std::cout << "2022-01-10" << std::endl;
    std::cout << "2022-10-20" << std::endl;
    return 1;
}

bool validateNB(const std::string &str, int flag) {
    if(isNegative(str))
        return false;
    if (str.find(".") != std::string::npos)
    {
        if(std::atof(str.c_str()) == 0)
            return false;
    }
    else
    {
        int f = std::atoi(str.c_str());
        if (f < 0 || f > 1000)
            return false;
    }
    if(flag == 1) {
        for(size_t i = 0; i < str.length() ; i++){
            if(!std::isdigit(str[i]) && str[i] != '.')
                return false;
        }
    }
    return true;
}

bool isNegative(const std::string &str) {
    float f = std::atof(str.c_str());
    if (f < 0)
        return true;
    return false;
}

bool validateString(const std::string &str) {
    if (str.size() < 11)
        return false;
    if (str[4] != '-' || str[7] != '-')
        return false;
    std::istringstream iss(str);
    int year, month, day;
    char separator;
    std::string nb;
    if (!(iss >> year >> separator >> month >> separator >> day >> separator >> nb))
        return false;
    if ((year >= 0 && year <= 9999) && (month >= 1 && month <= 12) && (day >= 1 && day <= 31) && validateNB(nb, 1))
        return true;

    return false;
}

std::map<std::pair<int, std::string>, double> *inputCreate(std::string fileName) {
    std::map<std::pair<int, std::string>, double> *mapRet = new std::map<std::pair<int, std::string>, double>;
    std::ifstream file(fileName.c_str());
    if (!file)
        throw std::invalid_argument("Invalid file name");
    std::string firstLine;
    std::getline(file, firstLine);

    std::string line;
    int uniqueNB = 0;
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        if (std::getline(iss, dateStr, '|') && std::getline(iss, rateStr))
        {
            if (!dateStr.empty() && !rateStr.empty())
            {
                try
                {
                    if (validateString(line)) {
                        double rate = std::atof(rateStr.c_str());
                        (*mapRet)[std::make_pair(uniqueNB++, dateStr)] = rate;
                    }
                    else {
                        if (isNegative(rateStr))
                            (*mapRet)[std::make_pair(uniqueNB++, dateStr)] = -3;
                        else if (!validateNB(rateStr, 0))
                            (*mapRet)[std::make_pair(uniqueNB++, dateStr)] = -2;
                        else
                            (*mapRet)[std::make_pair(uniqueNB++, dateStr)] = -1;
                    }
                }
                catch (const std::exception &e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
        }
        else {
            if(!line.empty()) {
                (*mapRet)[std::make_pair(uniqueNB++, dateStr)] = -1;
            }
        }
    }
    return mapRet;
}

// for DEBUG
void printDB(std::map<std::string, double> DB) {
    std::map<std::string, double>::const_iterator it;
    for (it = DB.begin(); it != DB.end(); ++it)
    {
        std::cout << "\nDate: " << it->first << "\nValue: " << it->second << std::endl;
    }
}

void printDBDOUBLE(std::map<std::pair<std::string, int>, double> DB) {
    std::map<std::pair<std::string, int>, double>::const_iterator it;
    for (it = DB.begin(); it != DB.end(); ++it)
    {
        std::cout << "\nDate: " << it->first.first << "\nValue: " << it->second << "\nINDEX" << it->first.second << std::endl;
    }
}