/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:19:17 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 13:21:11 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 72, 45)
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &other) : Form(other.getName(), 72, 45)
{
	*this = other;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) 
{
	(void)rhs;
	return (*this);
}

void					PresidentialPardonForm::execute(Bureaucrat const &other) const
{
	if ((this->getSigned() == true) && (other.getGrade() <= this->getExecuteGrade()))
		std::cout << other.getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must signed this form first before it can be requested." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream			&operator<<(std::ostream &out, PresidentialPardonForm const &rhs)
{
	out << "__Presidential Pardon Form Details__" << std::endl
			<< "Name: " << rhs.getName() << std::endl
			<< "Signing Grade Requirement: " << rhs.getSignGrade() << std::endl
			<< "Execution Grade Requirement: " << rhs.getExecuteGrade() << std::endl;
	if(rhs.getSigned())
			out << "Form has been signed." << std::endl;
	else
			out << "Form has not been signed yet." << std::endl;
	out << "____________________________________" << std::endl;
	return (out);
}