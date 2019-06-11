/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 17:39:01 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/10 17:39:01 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) : Form(other.getName(), 145, 137)
{
	*this = other;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) 
{
	(void)rhs;
	return (*this);
}

void					ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if ((this->getSigned() == true) && (executor.getGrade() <= this->getExecuteGrade()))
	{
		std::string		file = this->getName() + "_shrubbery";
		std::ofstream	ofs(file);

		ofs <<"          _-_                 _-_                 _-_" << std::endl
			<<"       /~~   ~~\\           /~~   ~~\\           /~~   ~~\\" << std::endl
			<<"    /~~         ~~\\     /~~         ~~\\     /~~         ~~\\" << std::endl
			<<"   {               }   {               }   {               }" << std::endl
			<<"    \\  _-     -_  /     \\  _-     -_  /     \\  _-     -_  /" << std::endl
			<<"      ~  \\\\ //  ~         ~  \\\\ //  ~         ~  \\\\ //"<< std::endl
			<<"   _- -   | | _- _     _- -   | | _- _     _- -   | | _- _" << std::endl
			<<"     _ -  | |   -_       _ -  | |   -_       _ -  | |   -_"<< std::endl
			<<"         // \\\\               // \\\\               // \\\\"<< std::endl;
		ofs.close();
		std::cout << "Shrubbery Form has been created by " << executor.getName() << std::endl;
	}
	else if (this->getSigned() == false)
		std::cout << "A Bureaucrat must sign this form first." << std::endl;
	else
		throw Form::GradeTooLowException();
	return;
}

std::ostream			&operator<<(std::ostream &out, ShrubberyCreationForm const &rhs)
{
	out << "__Shrubbery Creation Form Details__" << std::endl
			<< "Name: " << rhs.getName() << std::endl
			<< "Signing Grade Requirement: " << rhs.getSignGrade() << std::endl
			<< "Execution Grade Requirement: " << rhs.getExecuteGrade() << std::endl;
	if(rhs.getSigned())
			out << "Form has been signed." << std::endl;
	else
			out << "Form has not been signed yet." << std::endl;
	out << "___________________________________" << std::endl;
	return (out);
}