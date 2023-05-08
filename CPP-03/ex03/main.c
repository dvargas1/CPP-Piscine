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
    a.attack("Dummy");
    a.guardGate();
    a.highFivesGuys();
    a.WhoAmI();

    DiamondTrap b;
    b = a;
    b.WhoAmI();
    
    DiamondTrap c(a);
    c.beRepaired(100);
    c.highFivesGuys();
    c.WhoAmI();
}