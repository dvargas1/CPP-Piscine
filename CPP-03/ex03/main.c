/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:58:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/08 07:58:01 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("ShinyBOY");
    a.attack("Dummy");
    a.guardGate();
    a.highFivesGuys();

    DiamondTrap b;
    b = a;
    
    b.takeDamage(10000);
    
    DiamondTrap c(a);
    c.beRepaired(100);
}