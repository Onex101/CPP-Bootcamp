/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:01:56 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 16:57:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n, std::string type){
	this->horde = new Zombie[n];
	this->sizeOfHorde = n;
	std::string arrNames[4] = {"Name1", "Name2", "Name3", "Name4"};
	for (int i = 0; i < n; i++){
		this->horde[i].setType(type);
		this->horde[i].setName(arrNames[rand() % 3]);
	}
}

ZombieHorde::~ZombieHorde(){
	delete[] horde;
	std::cout << "Zombie Horde Over"<<std::endl;
	return ;
}

void ZombieHorde::announce(){
	for(int i = 0; i < sizeOfHorde; i++){
		this->horde[i].announce();
	}
}