/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:58:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 08:14:16 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("ShinyBOY");
    a.printStatus();
    a.attack("Dummy");
    a.guardGate();
    a.highFivesGuys();
    a.whoAmI();

    std::cout << "\n\n second DTRAP" << std::endl;
    DiamondTrap b;
    b = a;
    b.whoAmI();
    
    std::cout << "\n\n third DTRAP" << std::endl;
    DiamondTrap c(a);
    c.beRepaired(100);
    c.highFivesGuys();
    c.whoAmI();
    std::cout <<"\n\n"<<std::endl;
}