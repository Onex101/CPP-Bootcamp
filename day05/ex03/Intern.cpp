/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 06:34:54 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 13:20:20 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	return;
}

Intern::Intern(Intern &other)
{
	*this = other;
	return;
}

Intern::~Intern(void)
{
	return;
}

Intern &Intern::operator=(Intern const &rhs) 
{
	(void)rhs;
	return (*this);
}

Form        *Intern::makeForm(std::string formName, std::string formTarget)
{
    std::for_each(formName.begin(), formName.end(), [](char & c) {
		c = ::toupper(c);
	});
    if (formName.find("ROBOTOMY") != std::string::npos) {
        return new RobotomyRequestForm(formTarget);
    }
    else if (formName.find("PRESIDENTIAL") != std::string::npos) {
        return new PresidentialPardonForm(formTarget);
    }
    else if (formName.find("SHRUBBERY") != std::string::npos) {
        return new ShrubberyCreationForm(formTarget);
    }
    else{
        std::cout << "Could not create form, could not find form name" << std::endl;
    }
    return (NULL);
}