/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:03 by marvin            #+#    #+#             */
/*   Updated: 2019/06/07 12:03:50 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

class ScavTrap
{
	private:
		std::string _name;
		unsigned  int _hitPnts;
		unsigned int _maxHitPnts;
		unsigned int _energyPnts;
		unsigned int _maxEnergyPnts;
		unsigned int _level;
		unsigned int _melleeAttckDmg;
		unsigned int _rangedAttckDmg;
		unsigned int _armourDmgReduc;

	public:
		ScavTrap(void);
		ScavTrap(std::string);
		~ScavTrap(void);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
        void challengeNewComer(void);

		ScavTrap &operator=(ScavTrap const &other);

};

#endif