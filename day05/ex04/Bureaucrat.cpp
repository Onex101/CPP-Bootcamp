/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:24:10 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 13:21:11 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void){
	this->_grade = 1;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src){
	*this = src;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade){
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::~Bureaucrat(void){
	return ;
}

Bureaucrat &Bureaucrat::operator= (const Bureaucrat &other){
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void):msg("Grade to low"){
	return ;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &other){
	*this = other;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() {
	return ;
}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &other){
	static_cast <void> (other);
	return (*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return msg.c_str();
}

Bureaucrat:: GradeTooHighException::GradeTooHighException(void):msg("Grade to high") {
	return ;
}

Bureaucrat:: GradeTooHighException::GradeTooHighException(const GradeTooHighException &other){
	*this = other;
	return ;
}

Bureaucrat:: GradeTooHighException::~GradeTooHighException(void) throw(){
	return ;
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &other){
	static_cast <void> (other);
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return msg.c_str();
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150){
		throw Bureaucrat::GradeTooLowException();
	}
	else{
		this->_grade = grade;
	}
	return ;
}

void Bureaucrat::incrementGrade(void){
	this->_grade--;
	if (this->_grade <= 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	return ;
}

void Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade >= 150)
	{
		throw  Bureaucrat::GradeTooLowException();
	}
	return ;
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::ostream &operator<< (std::ostream &out, const Bureaucrat &other)
{
	out << "Name: " <<other.getName() 
		<< ", Grade: " << other.getGrade()
		<< std::endl;
	return (out);
}

void			Bureaucrat::executeForm(Form const &form){
	if (this->_grade < form.getExecuteGrade())
	{
		std::cout << "Bureaucrat " << this->_name << " executes " << form.getName() << std::endl;
		form.execute(*this);
	}
	else
		std::cout << "Bureaucrat " << this->_name << " grade is too low (" << this->_grade << "). They need a grade of "
			<< form.getExecuteGrade() << " to execute " << form.getName() << std::endl;
	return;
}
