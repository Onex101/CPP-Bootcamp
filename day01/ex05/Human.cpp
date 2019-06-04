/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:21:29 by marvin            #+#    #+#             */
/*   Updated: 2019/06/04 17:21:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human()
{
	return;
}

Brain &Human::getBrain()
{
	return this->brain;
}

std::string	Human::identify()
{
	return	this->brain.identify();
}