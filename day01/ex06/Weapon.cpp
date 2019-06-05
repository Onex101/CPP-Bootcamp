/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:19:46 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/05 07:55:55 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
}

Weapon::Weapon(std::string type)
{
    setType(type);
}

Weapon::~Weapon()
{
}

const std::string Weapon::getType(){
    return this->type;
}

void Weapon::setType(std::string type){
    this->type = type;
}

