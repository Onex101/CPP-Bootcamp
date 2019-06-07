/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 15:21:03 by marvin            #+#    #+#             */
/*   Updated: 2019/06/06 15:21:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>

class FragTrap
{
	private:
		const std::string _name;
		unsigned  int _hitPnts;
		unsigned int _maxHitPnts;
		unsigned int _energyPnts;
		unsigned int _maxEnergyPnts;
		unsigned int _level;
		unsigned int _melleeAttckDmg;
		unsigned int _rangedAttckDmg;
		unsigned int _armourDmgReduc;

	public:
		FragTrap(void);
		FragTrap(std::string);
		~FragTrap(void);

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);

		FragTrap &operator=(FragTrap const &other);

};

#endif