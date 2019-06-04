/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:16:34 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 12:32:27 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_H
# define ZOMBIE_EVENT_H

#include "Zombie.hpp"

class	ZombieEvent {

	public: 
        ZombieEvent(); 
		ZombieEvent(std::string); 
		~ZombieEvent(void);

		std::string		type;

		void	setZombieType(std::string);
		Zombie	*newZombie(std::string);
		Zombie	*randomChump();

};

#endif