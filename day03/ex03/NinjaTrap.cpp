/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:31:40 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/08 12:07:34 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void){
    this->_name = "NappingNinja";
	this->_hitPnts = 60;
	this->_maxHitPnts = 60;
	this->_energyPnts = 120;
	this->_maxEnergyPnts = 120;
	this->_level = 1;
	this->_melleeAttckDmg = 60;
	this->_rangedAttckDmg = 5;
	this->_armourDmgReduc = 0;
	std::cout << this->_name << " says: Can't C me" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name){
    this->_name = name;
	this->_hitPnts = 60;
	this->_maxHitPnts = 60;
	this->_energyPnts = 120;
	this->_maxEnergyPnts = 120;
	this->_level = 1;
	this->_melleeAttckDmg = 60;
	this->_rangedAttckDmg = 5;
	this->_armourDmgReduc = 0;
	std::cout << this->_name << " says: Im invisible" << std::endl;
}

NinjaTrap::~NinjaTrap(void){
	std::cout << this->_name << " says: Okay you found me. Bye!" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap){
    std::cout << "It's the same as me" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap){
    std::cout << "This is the base class" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap){
    std::cout << "This is a ScavTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap){
    std::cout << "This is a FragTrap" << std::endl;
}