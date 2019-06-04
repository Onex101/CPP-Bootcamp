/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:25:01 by marvin            #+#    #+#             */
/*   Updated: 2019/06/04 17:25:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	return;
}

Brain::~Brain()
{
	return;
}

std::string	Brain::identify()
{
	std::stringstream address;
	address << this;
	return (address.str());
}