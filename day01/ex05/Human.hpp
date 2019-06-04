/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:18:08 by marvin            #+#    #+#             */
/*   Updated: 2019/06/04 17:18:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H
# include "Brain.hpp"

class Human
{		
	public:
		Brain brain;
		Human();
		Brain &getBrain();
		std::string	identify();
};
#endif