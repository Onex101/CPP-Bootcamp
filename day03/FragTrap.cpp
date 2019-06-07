/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/06 15:21:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):
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
	std::cout << "Don't forget me!" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "For you...I commit...seddoku..." << std::endl;
}

FragTrap::FragTrap(std::string name):
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
	std::cout << "Ha ha ha! I, "<<name<<", LIVE! Hahaha!" << std::endl;
}

void FragTrap::rangedAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " at range , causing "<< this->_rangedAttckDmg << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " , causing "<< this->_melleeAttckDmg << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
	unsigned int actualDamage;

	actualDamage = amount - this->_armourDmgReduc;
	if (actualDamage > this->_hitPnts)
	{
		this->_hitPnts = 0;
		std::cout << this->_name << "Stop it! Let me recharge" << std::endl;
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

void FragTrap::beRepaired(unsigned int amount){

}