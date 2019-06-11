/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:23:59 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 09:35:50 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	private:
		const std::string		_name;
		int						_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &other);
		~Bureaucrat(void);
		
		void			setGrade(int grade);
		int				getGrade(void) const;
		std::string		getName(void) const;
		void			incrementGrade(void);
		void			decrementGrade(void);
		void			executeForm(Form const &form);

		Bureaucrat		&operator= (const Bureaucrat &rhs);

		class GradeTooLowException:public std::exception{
			protected:
				std::string msg;
			public:
				GradeTooLowException(void);
				GradeTooLowException(const Bureaucrat::GradeTooLowException &src);
				~GradeTooLowException(void) throw();
				virtual const char *what() const throw();

				GradeTooLowException  &operator= (const Bureaucrat::GradeTooLowException &rhs);
		};

		class GradeTooHighException:public std::exception{
			protected:
				std::string msg;
			public:
				GradeTooHighException(void);
				GradeTooHighException(const Bureaucrat::GradeTooHighException &src);
				~GradeTooHighException(void) throw();
				virtual const char *what() const throw();

				GradeTooHighException  &operator= (const Bureaucrat::GradeTooHighException &rhs);
		};
};

std::ostream			&operator<< (std::ostream &out, const Bureaucrat &rhs);

#endif