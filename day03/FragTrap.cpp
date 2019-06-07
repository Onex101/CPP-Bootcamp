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

FragTrap::FragTrap(void){
	std::cout << "Don't forget me!" << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "For you...I commit...seddoku..." << std::endl;
}

void FragTrap::rangedAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " at range , causing "<< this->_rangedAttckDmg << " points of damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target){
	std:: cout << "FR4G-TP " << this->_name <<" attacks " << target << " , causing "<< this->_melleeAttckDmg << " points of damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){

}

void FragTrap::beRepaired(unsigned int amount){

}