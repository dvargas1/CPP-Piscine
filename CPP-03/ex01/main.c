/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:58:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:16:05 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Guardian");
    a.guardGate();
    a.guardGate();
    a.attack("EVALUATOR");
    a.attack("EVALUATOR");
    a.takeDamage(10);
    a.beRepaired(30);
    a.takeDamage(1000);
    a.attack("EVALUATOR");
    a.guardGate();


    ScavTrap b("Second");
    ScavTrap c = b;
    c.guardGate();
    c.takeDamage(30);
    c.attack("AGAIN");
}