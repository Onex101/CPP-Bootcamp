/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:20:55 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 12:40:44 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
    return;
}

ZombieEvent::ZombieEvent(std::string type){
    this->type = type;
    std::cout << "Zombie Horde of "<< this->type << " is coming"<<std::endl;
	return;
}

ZombieEvent::~ZombieEvent(void) 
{
	std::cout << "Zombie Horde Is Done" << std::endl;
	return;
}

void ZombieEvent::setZombieType(std::string type){
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name){
    return (new Zombie(this->type, name));
}

Zombie* ZombieEvent::randomChump(){
    std::string arrNames[4] = {"Name1", "Name2", "Name3", "Name4"};
    std::string name = arrNames[rand() % 3];
    return (new Zombie(this->type, name));
}

