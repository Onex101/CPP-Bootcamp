/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 06:34:45 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 07:05:18 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
    public:
        Intern();
        ~Intern(void);
        Intern(Intern &other);

        virtual Form* makeForm(std::string formName, std::string formTarget);

		Intern &operator=(Intern const &rhs);
};

#endif