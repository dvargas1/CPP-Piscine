/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvargas <dvargas@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 08:58:08 by dvargas           #+#    #+#             */
/*   Updated: 2023/05/07 09:38:43 by dvargas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("FragTrap");
    a.attack("EVALUATOR");
    a.attack("EVALUATOR");
    a.takeDamage(10);
    a.beRepaired(30);
    a.takeDamage(1000);
    std::cout<<"\n";

    FragTrap b("Second");
    FragTrap c = b;
    c.takeDamage(30);
    c.attack("AGAIN");
    std::cout<<"\n";
}