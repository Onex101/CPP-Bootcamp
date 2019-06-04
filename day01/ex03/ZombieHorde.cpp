/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:01:56 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 14:15:41 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n, std::string type){
    this->horde = new *Zombie[n];
    this->sizeOfHorde = n;
    std::string arrNames[4] = {"Name1", "Name2", "Name3", "Name4"};
    for (int i = 0; i < n; i++){
        std::string name = arrNames[rand() % 3];
        Zombie *oZombie = new Zombie(type, name);
        this->horde[i] = oZombie;
    }
    
}

ZombieHorde::~ZombieHorde(){
    return ;
}

void ZombieHorde::announce(){
    for(int i = 0; i < sizeOfHorde; i++){
        std::cout<<i<<std::endl;
        this->horde[i]->announce();
    }
    delete horde;
}