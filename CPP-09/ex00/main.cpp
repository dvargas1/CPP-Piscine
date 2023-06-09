/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:56:21 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/09 11:34:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void printDB(std::map<std::string, double> DB);
std::map<std::string,double> *inputCreate(std::string fileName);

// bool validateLine(std::string line);
// bool validateValue(std::string date);
// bool validateDate(std::string date);


int main(int argc, char **argv)
{
    if(argc != 2)
        return std::cerr<<"tente novamente com 1 argumento"<<std::endl, 1;
    
    std::map<std::string, double> *input = inputCreate(argv[1]);
    BitcoinExchange bitCoinTrader;
    //printDB(*input);
    bitCoinTrader.makeExchange(*input);

    delete input;
}
std::map<std::string,double> *inputCreate(std::string fileName) {
    std::map<std::string, double>* mapRet = new std::map<std::string, double>;
    std::ifstream file(fileName.c_str());
    if (!file)
        throw std::invalid_argument("Invalid file name");
    std::string line;
    while(std::getline(file,line)){
        std::istringstream iss(line);
        std::string dateStr, rateStr;
        if (std::getline(iss, dateStr, '|') && std::getline(iss, rateStr)) {
            if(!dateStr.empty() && !rateStr.empty()){
                try
                {
                    double rate = std::atof(rateStr.c_str());
                    (*mapRet)[dateStr] = rate;
                }
                catch(const std::exception& e)
                {
                    std::cerr << e.what() << '\n';
                }
            }
        }
    }
    return mapRet;
}

void printDB(std::map<std::string, double> DB){
    std::map<std::string, double>::const_iterator it;
    for (it = DB.begin(); it != DB.end(); ++it) {
        std::cout<< "\nDate: " << it->first << "\nValue: " << it->second << std::endl;
    }
}