/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:24:25 by marvin            #+#    #+#             */
/*   Updated: 2019/06/05 13:57:52 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H
# include <iostream>
#include <string>
# include <sstream>

 class	Brain
{
	public:
		Brain();
		~Brain();
		std::string	identify();
};
#endif 