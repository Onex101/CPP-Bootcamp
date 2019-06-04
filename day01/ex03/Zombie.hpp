/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:02:51 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 16:53:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie{
	private:
		std::string type;
		std::string name;

	public:
		Zombie();
		Zombie(std::string, std::string);
		~Zombie();
		void setType(std::string);
		void setName(std::string);
		std::string getType();
		std::string getName();
		void announce();
};

#endif
