/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 17:01:29 by marvin            #+#    #+#             */
/*   Updated: 2019/06/04 17:01:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {

	std::string str = "HI THIS IS BRAIN";
	std::string &refString = str;
	std::string *pntrString = &str;

	std::cout << "Reference String : " << refString << std::endl;
	std::cout << "Pointer String : " << *pntrString << std::endl;

	return (0);
}