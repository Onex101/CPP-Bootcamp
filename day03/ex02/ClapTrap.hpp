/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:12:49 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/08 18:05:30 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	protected:
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
		ClapTrap(void);
		ClapTrap(std::string);
		~ClapTrap(void);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		ClapTrap &operator=(ClapTrap const &other);

};

#endif