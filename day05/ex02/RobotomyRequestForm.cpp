/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:14:17 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/10 18:14:17 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other.getName(), 72, 45)
{
	*this = other;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) 
{
	(void)rhs;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &rhs) const
{
	(void)rhs;
	srand(time(NULL));
	if (std::rand() % 2 == 0)
		std::cout <<"*Drilling Noise* " << this->getName() << " has been robotomized" << std::endl;
	else
		std::cout << this->getName() << " was not robotomized" << std::endl;
}

std::ostream			&operator<<(std::ostream &out, RobotomyRequestForm const &rhs)
{
	out << "__Robotomy Request Form Details__" << std::endl
			<< "Name: " << rhs.getName() << std::endl
			<< "Signing Grade Requirement: " << rhs.getSignGrade() << std::endl
			<< "Execution Grade Requirement: " << rhs.getExecuteGrade() << std::endl;
	if(rhs.getSigned())
			out << "Form has been signed." << std::endl;
	else
			out << "Form has not been signed yet." << std::endl;
	out << "_________________________________" << std::endl;
	return (out);
}