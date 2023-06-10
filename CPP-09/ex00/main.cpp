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


bool validateNB(const std::string& str) {
    std::istringstream iss(str);
    std::string issString = iss.str();
    
    if (issString.find(".") != std::string::npos) {
        float f;
        if (!(iss >> f) || !iss.eof())
            return false;
        if (f < 0)
            return false;
    } else {
        int i;
        if ((iss >> i)) {
            if (i < 0 || i > 1000)
                return false;
        }
    }
    return true;
}


bool validateString(const std::string& str) {
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

  // Verifica se a extração foi bem-sucedida
  if (iss.eof() && (year >= 0 && year <= 2022) && (month >= 1 && 
        month <= 12) && (day >= 1 && day <= 31) && validateNB(nb))
    return true;

  return false;
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
                    if (validateString(line)) {
                        double rate = std::atof(rateStr.c_str());
                        (*mapRet)[dateStr] = rate;
                    }
                    else
                    if(!validateNB(rateStr))
                        (*mapRet)[dateStr] = -2;
                    (*mapRet)[dateStr] = -1;
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