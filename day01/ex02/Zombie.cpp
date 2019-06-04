/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:05:15 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 13:00:07 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
    return;
}

Zombie::~Zombie(){
    std::cout << "Zombie "<< this->name << " is dead"<<std::endl;
    return;
}

Zombie::Zombie(std::string type, std::string name){
    setType(type);
    setName(name);
}

void Zombie::setType(std::string type){
    this->type = type;
}

void Zombie::setName(std::string name){
    this->name = name;
}

std::string Zombie::getName(){
    return this->name;
}

std::string Zombie::getType(){
    return this->type;
}

void Zombie::announce(){
    std::cout<< "<" << getName() << " (" << getType() << ")> Braiiiiiiiinnnssss..."  << std::endl;
}