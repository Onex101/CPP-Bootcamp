/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:02:20 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 16:44:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

#include "Zombie.hpp"

class ZombieHorde{
	public:
		Zombie	*horde;
		int		sizeOfHorde;

	public:
		ZombieHorde(int n, std::string type);
		~ZombieHorde(void);
		void announce();
};

#endif