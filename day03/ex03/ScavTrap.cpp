/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 16:13:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->_name = "NoNameBrandon";
	this->_hitPnts = 100;
	this->_maxHitPnts = 100;
	this->_energyPnts = 50;
	this->_maxEnergyPnts = 50;
	this->_level = 1;
	this->_melleeAttckDmg = 20;
	this->_rangedAttckDmg = 15;
	this->_armourDmgReduc = 3;
	std::cout << this->_name << " says: *Online!*" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->_name << " says: Bzzt.. zzt... BOOM!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitPnts = 100;
	this->_maxHitPnts = 100;
	this->_energyPnts = 50;
	this->_maxEnergyPnts = 50;
	this->_level = 1;
	this->_melleeAttckDmg = 20;
	this->_rangedAttckDmg = 15;
	this->_armourDmgReduc = 3;
	std::cout << this->_name << " says: *Powering On!*" << std::endl;
}

void ScavTrap::challengeNewComer(void){

    switch (rand() % 3)
    {
    case 0:
        {
            std:: cout << this->_name <<"  must jump" << std::endl 
                        << this->_name << " says: I do not have legs!" << std::endl;
            break;
        }
    case 1:
        {
            std:: cout << this->_name <<" spin around" << std::endl
                        << this->_name << " says: Gyroscope systems mulfunctioning..." << std::endl;   
            break;
        }
    case 2:
        {
            std:: cout << this->_name <<" kill the badass" << std::endl 
                        << this->_name << " says: More work?" << std::endl;
                        
            break;
        }
    }
}