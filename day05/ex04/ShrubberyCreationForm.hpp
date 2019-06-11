/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:29:56 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/10 17:29:56 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

		void	execute(Bureaucrat const &executor) const;
};

std::ostream	&operator<<(std::ostream &out, ShrubberyCreationForm const &rhs); 

#endif