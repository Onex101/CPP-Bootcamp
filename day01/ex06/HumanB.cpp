/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:58:08 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/05 08:39:04 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string s): name(s)
{
}

void HumanB::setWeapon(Weapon& w)
{
    this->oWeapon = &w;
    return ;
}

void HumanB::attack(){
    std::cout << name << " attacks with their " << oWeapon->getType() << std::endl;
}