/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 16:14:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	this->_name = "NoNameBrandon";
	this->_hitPnts = 100;
	this->_maxHitPnts = 100;
	this->_energyPnts = 100;
	this->_maxEnergyPnts = 100;
	this->_level = 1;
	this->_melleeAttckDmg = 30;
	this->_rangedAttckDmg = 20;
	this->_armourDmgReduc = 5;
	std::cout << this->_name << " says: Don't forget me!" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << this->_name << " says: For you...I commit...seddoku..." << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_name = name;
	this->_hitPnts = 100;
	this->_maxHitPnts = 100;
	this->_energyPnts = 100;
	this->_maxEnergyPnts = 100;
	this->_level = 1;
	this->_melleeAttckDmg = 30;
	this->_rangedAttckDmg = 20;
	this->_armourDmgReduc = 5;
	std::cout << this->_name << " says: Ha ha ha! I, LIVE! Hahaha!" << std::endl;
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