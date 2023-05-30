/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:58:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 08:08:36 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Metabee");
    a.attack("TARGET 1");
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    a.takeDamage(1);
    std::cout << "\n";
    
    ClapTrap b("Dorcus");
    b.attack("TARGET 2");
    b.takeDamage(5);
    std::cout << "\n";

    ClapTrap c(a);
    c.attack("TESTE10");
    c.takeDamage(3);
    std::cout << "\n";

    ClapTrap d;
    d = b;
    d.attack("TESTE20");
    d.takeDamage(5);
    d.beRepaired(5);
    std::cout << "\n";

}