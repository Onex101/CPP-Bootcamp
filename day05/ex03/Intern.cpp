/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 06:34:54 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 15:57:55 by xrhoda           ###   ########.fr       */
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
    std::locale settings;
    std::string converted;
    for(int i = 0; i < (int)formName.size(); ++i)
		converted += (std::toupper(formName[i], settings));
    if (converted.find("ROBOTOMY") != std::string::npos) {
        std::cout << "Intern creates ROBOTOMY Form" << std::endl;
        return new RobotomyRequestForm(formTarget);
    }
    else if (converted.find("PRESIDENTIAL") != std::string::npos) {
        std::cout << "Intern creates PRESIDENTIAL Form" << std::endl;
        return new PresidentialPardonForm(formTarget);
    }
    else if (converted.find("SHRUBBERY") != std::string::npos) {
        std::cout << "Intern creates SHRUBBERY Form" << std::endl;
        return new ShrubberyCreationForm(formTarget);
    }
    else{
        std::cout << "Could not create form, could not find form name" << std::endl;
    }
    return (NULL);
}