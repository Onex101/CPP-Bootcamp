/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:42:23 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 12:59:34 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICEBLOCK_H
# define OFFICEBLOCK_H

#include "Bureaucrat.hpp"
#include "Intern.hpp"

class OfficeBlock
{
private:
    Intern      *_intern;
    Bureaucrat  *_signer;
    Bureaucrat  *_exectioner;

public:
    OfficeBlock(void);
    OfficeBlock(Intern& intern,Bureaucrat& signer,Bureaucrat& executioner);
    ~OfficeBlock();

    void setIntern(Intern& intern);
    void setSigner(Bureaucrat& signer);
    void setExecutioner(Bureaucrat& executioner);

    void doBureaucracy(std::string formName, std::string target);

    class NoInternException : public std::exception
		{
            protected:
				std::string msg;
			public:
				NoInternException(void);
				NoInternException(NoInternException const &other);
				virtual ~NoInternException(void) throw();
				NoInternException &operator=(NoInternException const &rhs);
				virtual const char* what() const throw();
		};

		class NoSignerException : public std::exception
		{
            protected:
				std::string msg;
			public:
				NoSignerException(void);
				NoSignerException(NoSignerException const &other);
				virtual ~NoSignerException(void) throw();
				NoSignerException &operator=(NoSignerException const &rhs);
				virtual const char* what() const throw();
		};

		class NoExecuterException : public std::exception
		{
            protected:
				std::string msg;
			public:
				NoExecuterException(void);
				NoExecuterException(NoExecuterException const &other);
				virtual ~NoExecuterException(void) throw();
				NoExecuterException &operator=(NoExecuterException const &rhs);
				virtual const char* what() const throw();
		};

		class SignerLowGradeException : public std::exception
		{
            protected:
				std::string msg;
			public:
				SignerLowGradeException(void);
				SignerLowGradeException(SignerLowGradeException const &other);
				virtual ~SignerLowGradeException(void) throw();
				SignerLowGradeException &operator=(SignerLowGradeException const &rhs);
				virtual const char* what() const throw();
		};

		class ExecuterLowGradeException : public std::exception
		{
            protected:
				std::string msg;
			public:
				ExecuterLowGradeException(void);
				ExecuterLowGradeException(ExecuterLowGradeException const &other);
				virtual ~ExecuterLowGradeException(void) throw();
				ExecuterLowGradeException &operator=(ExecuterLowGradeException const &rhs);
				virtual const char* what() const throw();
		};
};

#endif