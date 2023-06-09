/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 18:56:21 by dvargas           #+#    #+#             */
/*   Updated: 2023/06/08 18:58:04 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main()
{
    std::string fileName = "data.csv";
    BitcoinExchange BitC(fileName);
    BitC.createDB(fileName);
    BitC.printDB();
}