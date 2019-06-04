/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:59:42 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 12:01:30 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak() 
{
	std::string*    panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}