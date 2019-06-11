/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:12:54 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/10 17:12:54 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class	PresidentialPardonForm : public Form
{

	public:

		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm(void);

		void	execute(Bureaucrat const &other) const;

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

}; 

std::ostream	&operator<<(std::ostream &out, PresidentialPardonForm const &rhs); 

#endif