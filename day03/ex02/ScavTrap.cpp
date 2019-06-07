/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 12:18:08 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):
	_name("NoNameBrandon")
	,_hitPnts(100)
	,_maxHitPnts(100)
	,_energyPnts(50)
	,_maxEnergyPnts(50)
	,_level(1)
	,_melleeAttckDmg(20)
	,_rangedAttckDmg(15)
	,_armourDmgReduc(3)
{
	std::cout << this->_name << " says: *Online!*" << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << this->_name << " says: Bzzt.. zzt... BOOM!" << std::endl;
}

ScavTrap::ScavTrap(std::string name):
	_name(name)
	,_hitPnts(100)
	,_maxHitPnts(100)
	,_energyPnts(50)
	,_maxEnergyPnts(50)
	,_level(1)
	,_melleeAttckDmg(20)
	,_rangedAttckDmg(15)
	,_armourDmgReduc(3)
{
	std::cout << this->_name << " says: *Powering On!*" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other){
	this->_name = other._name;
	this->_hitPnts = other._hitPnts;
	this->_maxHitPnts = other._maxHitPnts;
	this->_energyPnts = other._energyPnts;
	this->_maxEnergyPnts = other._maxEnergyPnts;
	this->_level = other._level;
	this->_melleeAttckDmg = other._melleeAttckDmg;
	this->_rangedAttckDmg = other._rangedAttckDmg;
	this->_armourDmgReduc = other._armourDmgReduc;
    return (*this);
}


void ScavTrap::rangedAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " at range , causing "<< this->_rangedAttckDmg << " points of damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " , causing "<< this->_melleeAttckDmg << " points of damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
	unsigned int actualDamage;

	actualDamage = amount - this->_armourDmgReduc;
	if (actualDamage > this->_hitPnts)
	{
		this->_hitPnts = 0;
		std::cout << this->_name << "says: Already dead" << std::endl;
	}
	else
	{
		this->_hitPnts -= actualDamage;
		std::cout << this->_name << " says: Fire back!" << std::endl
				  << "Armour Reduction: " << this->_armourDmgReduc << std::endl
				  << "Damage Taken: " << actualDamage << std::endl
				  << "HP Left: " << this->_hitPnts << std::endl;
	}
	return ;
}

void ScavTrap::beRepaired(unsigned int amount){
	unsigned int repair;

	repair = amount + this->_hitPnts;
	if (repair > this->_maxHitPnts)
	{
		this->_hitPnts = _maxHitPnts;
		std::cout << this->_name << " says: *Health at optimum levels*" << std::endl
			      << "HP: " << this->_hitPnts <<std::endl;
	}
	else
	{
		this->_hitPnts = repair;
		std::cout << this->_name << " says: *Health replenished*" << std::endl
				  << "HP: " << this->_hitPnts << std::endl;
	}
	return ;
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