/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:31:50 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/07 07:12:28 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string s, Weapon& w) : oWeapon(w), name(s)
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