/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:18:33 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/07 13:19:35 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void):
	_name("NoNameBrandon")
	,_hitPnts(100)
	,_maxHitPnts(100)
	,_energyPnts(100)
	,_maxEnergyPnts(100)
	,_level(1)
	,_melleeAttckDmg(30)
	,_rangedAttckDmg(20)
	,_armourDmgReduc(5)
{
	std::cout << this->_name << " says: Don't forget me!" << std::endl;
}

ClapTrap::~ClapTrap(void){
	std::cout << this->_name << " says: For you...I commit...seddoku..." << std::endl;
}

ClapTrap::ClapTrap(std::string name):
	_name(name)
	,_hitPnts(100)
	,_maxHitPnts(100)
	,_energyPnts(100)
	,_maxEnergyPnts(100)
	,_level(1)
	,_melleeAttckDmg(30)
	,_rangedAttckDmg(20)
	,_armourDmgReduc(5)
{
	std::cout << this->_name << " says: Ha ha ha! I, LIVE! Hahaha!" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other){
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


void ClapTrap::rangedAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " at range , causing "<< this->_rangedAttckDmg << " points of damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " , causing "<< this->_melleeAttckDmg << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	unsigned int actualDamage;

	actualDamage = amount - this->_armourDmgReduc;
	if (actualDamage > this->_hitPnts)
	{
		this->_hitPnts = 0;
		std::cout << this->_name << "says: Stop it! Let me recharge" << std::endl;
	}
	else
	{
		this->_hitPnts -= actualDamage;
		std::cout << this->_name << " says: Why do I even feel pain?!" << std::endl
				  << "Armour Reduction: " << this->_armourDmgReduc << std::endl
				  << "Damage Taken: " << actualDamage << std::endl
				  << "HP Left: " << this->_hitPnts << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount){
	unsigned int repair;

	repair = amount + this->_hitPnts;
	if (repair > this->_maxHitPnts)
	{
		this->_hitPnts = _maxHitPnts;
		std::cout << this->_name << " says: Sweet life juice!" << std::endl
			      << "HP: " << this->_hitPnts <<std::endl;
	}
	else
	{
		this->_hitPnts = repair;
		std::cout << this->_name << " says: Healsies!" << std::endl
				  << "HP: " << this->_hitPnts << std::endl;
	}
	return ;
}