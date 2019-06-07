/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 12:21:34 by xrhoda           ###   ########.fr       */
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
	std::cout << this->_name << " says: Don't forget me!" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << this->_name << " says: For you...I commit...seddoku..." << std::endl;
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
	std::cout << this->_name << " says: Ha ha ha! I, LIVE! Hahaha!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other){
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

void FragTrap::beRepaired(unsigned int amount){
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

void FragTrap::vaulthunter_dot_exe(std::string const & target){

	unsigned int actualEnergy = _energyPnts - 25;
	if (actualEnergy > 0){
		this->_energyPnts = actualEnergy;
		std::srand(time(0));
		switch (rand() % 5)
		{
		case 0:
			{
				std:: cout << this->_name <<" attacks " << target << " using gun" << std::endl 
						   << this->_name << " says: Is it dead? Can, can I open my eyes now?" << std::endl;
				break;
			}
		case 1:
			{
				std:: cout << this->_name <<" attacks " << target << " using grenade" << std::endl
						   << this->_name << " says: Grenaaaade!" << std::endl;   
				break;
			}
		case 2:
			{
				std:: cout << this->_name <<" attacks " << target << " using freeze ray" << std::endl 
						   << this->_name << " says: Solid! Get it? As in... frozen?" << std::endl;
						   
				break;
			}
		case 3:
			{
				std:: cout << this->_name <<" feints  " << target << " and melee attacks" << std::endl
						   << this->_name << " says: Self destructing in 3... 2... Hahaha, why would I want to do that?" << std::endl;

				break;
			}
		case 4:
			{
				std:: cout << this->_name <<" attacks  " << target << " by being annoying" << std::endl 
						   << this->_name << " says: *ramble* and that's how I saved the- why are your ears bleeding?" << std::endl;
				break;
			}
		default:
			{
				meleeAttack(target);
				break;
			}
		}
	}
	else{
		this->_energyPnts = 0;
		std:: cout << this->_name << " says: Can I do that later?" << std::endl;
	}
}