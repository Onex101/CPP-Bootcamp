/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:31:50 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/05 08:35:43 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w): name(s), oWeapon(w)
{
}

HumanA::~HumanA()
{
}

void HumanA::setName(std::string name){
    this->name = name;
}
void HumanA::attack(){
    std::cout << name << " attacks with their " << oWeapon.getType() << std::endl;
}