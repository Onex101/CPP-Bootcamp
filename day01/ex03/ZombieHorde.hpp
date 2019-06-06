/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:02:20 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/06 06:28:30 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde{
	private:
		Zombie	*horde;
		int		sizeOfHorde;

	public:
		ZombieHorde(int n, std::string type);
		~ZombieHorde(void);
		void announce();
};

#endif