/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:33:03 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 07:54:46 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int sgrade, int egrade): _name(name), _signed(false),_signGrade(sgrade), _executeGrade(egrade){
	if (this->_signGrade < 1 || this->_executeGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_executeGrade > 150)
		throw Form::GradeTooLowException();
	return;
}

Form::Form(Form &other) : _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	*this = other;
	return;
}

Form::~Form(void){
	return ;
}

Form &Form::operator=(const Form &rhs){
	this->_signed = rhs._signed;
	return (*this);
}

void	Form::signForm(void) 
{
	this->_signed = true;
	return;
}

void				Form::beSigned(Bureaucrat &oBureaucrat)
{
	if (oBureaucrat.getGrade() > this->_signGrade)
	{
		std::cout << "<Bureaucrat " << oBureaucrat.getName() << "> cannot sign <" << this->_name << "> because ";
		throw Form::GradeTooLowException();
	}
	else
	{
		if (this->_signed)
			std::cout << "<Bureaucrat " << oBureaucrat.getName() << "> cannot sign <" << this->_name << "> because form is already signed" << std::endl;
		else
		{
			std::cout << "<Bureaucrat " << oBureaucrat.getName() << "> signs <" << this->_name << ">" << std::endl;
			signForm();
		}
	}

}

Form::GradeTooLowException::GradeTooLowException(void):msg("Grade to low"){
	return ;
}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &other){
	*this = other;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &other){
	static_cast <void> (other);
	return (*this);
}

const char *Form::GradeTooLowException::what() const throw(){
	return msg.c_str();
}

Form:: GradeTooHighException::GradeTooHighException(void):msg("Grade to high") {
	return ;
}

Form:: GradeTooHighException::GradeTooHighException(const GradeTooHighException &other){
	*this = other;
	return ;
}

Form:: GradeTooHighException::~GradeTooHighException(void) throw(){
	return ;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator= (const GradeTooHighException &other){
	static_cast <void> (other);
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw(){
	return msg.c_str();
}

std::ostream			&operator<<(std::ostream &out, Form const &rhs)
{
	out << "_______Form Details_______" << std::endl
		<< "Name: " << rhs.getName() << std::endl
		<< "Signing Grade Requirement: " << rhs.getSignGrade() << std::endl
		<< "Execution Grade Requirement: " << rhs.getExecuteGrade() << std::endl;
	if(rhs.getSigned())
			out << "Form is signed." << std::endl;
	else
			out << "Form is not signed." << std::endl;
		out << "__________________________" << std::endl;
	return (out);
}

std::string			Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

int			Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int			Form::getExecuteGrade(void) const
{
	return	(this->_executeGrade);
}