/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:20:57 by marvin            #+#    #+#             */
/*   Updated: 2019/06/08 12:08:13 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
    FragTrap ft("ClapTrap");
    ScavTrap st("SapTrap");
    ScavTrap test(st);
    NinjaTrap nt("test");
    nt.ninjaShoebox(st);
    ft.takeDamage(40);
    ft.vaulthunter_dot_exe("Badass");
    ft.beRepaired(10);
    ft.rangedAttack("Skag");

    st.challengeNewComer();
    return 0;
}