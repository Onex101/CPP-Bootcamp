/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:42:26 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 13:21:11 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(Intern& intern,Bureaucrat& signer,Bureaucrat& executioner):_intern(&intern), _signer(&signer), _exectioner(&executioner){
    return;
}
OfficeBlock::~OfficeBlock(){
    return;
} 

void OfficeBlock::setIntern(Intern& intern){
 this->_intern = &intern;
}
void OfficeBlock::setSigner(Bureaucrat& signer){
    this->_signer = &signer;
}
void OfficeBlock::setExecutioner(Bureaucrat& executioner){
    this->_exectioner = &executioner;
}

void OfficeBlock::doBureaucracy(std::string formName, std::string target){
	
	if (!this->_intern){	
		throw OfficeBlock::NoInternException();
		return;
	}
	if (!this->_signer){	
		throw OfficeBlock::NoSignerException();
		return;
	}
	if (!this->_exectioner){	
		throw OfficeBlock::NoExecuterException();
		return;
	}

	Form *f = this->_intern->makeForm(formName, target);

	if (this->_signer->getGrade() > f->getSignGrade()){
		delete f;
		throw OfficeBlock::SignerLowGradeException();
		return;	
	}
	f->beSigned(*this->_signer);

	if (this->_exectioner->getGrade() > f->getExecuteGrade()){
		delete f;
		throw OfficeBlock::ExecuterLowGradeException();
		return;	
	}
	this->_exectioner->executeForm(*f);

	delete f;
	return;
}

//No Intern Exception
OfficeBlock::NoInternException::NoInternException(void):msg("No Intern"){
    return ;
}
OfficeBlock::NoInternException::NoInternException(NoInternException const &other){
    *this = other;
	return ;
}
OfficeBlock::NoInternException::~NoInternException(void) throw(){
    return ;
}
OfficeBlock::NoInternException& OfficeBlock::NoInternException::operator=(NoInternException const &other){
    static_cast <void> (other);
	return (*this);
}
const char* OfficeBlock::NoInternException::what() const throw(){
    return msg.c_str();
}   

//No Signer Exception
OfficeBlock::NoSignerException::NoSignerException(void):msg("No Signer"){
    return ;
}

OfficeBlock::NoSignerException::NoSignerException(NoSignerException const &other){
    *this = other;
	return ;
}

OfficeBlock::NoSignerException::~NoSignerException(void) throw(){
    return ;
}

OfficeBlock::NoSignerException& OfficeBlock::NoSignerException::operator=(NoSignerException const &rhs){
    static_cast <void> (rhs);
	return (*this); 
}

const char* OfficeBlock::NoSignerException::what() const throw(){
    return msg.c_str();
}


//No Executioner Exception
OfficeBlock::NoExecuterException::NoExecuterException(void):msg("No Executioner"){
    return ;
}

OfficeBlock::NoExecuterException::NoExecuterException(NoExecuterException const &other){
    *this = other;
	return ;
}

OfficeBlock::NoExecuterException::~NoExecuterException(void) throw(){
    return ;
}

OfficeBlock::NoExecuterException& OfficeBlock::NoExecuterException::operator=(NoExecuterException const &rhs){
    static_cast <void> (rhs);
	return (*this); 
}

const char* OfficeBlock::NoExecuterException::what() const throw(){
    return msg.c_str();
}

//Low Signer Grade Exception
OfficeBlock::SignerLowGradeException::SignerLowGradeException(void):msg("Signer has to low a grade"){
    return ;
}

OfficeBlock::SignerLowGradeException::SignerLowGradeException(SignerLowGradeException const &other){
    *this = other;
	return ;
}
OfficeBlock::SignerLowGradeException::~SignerLowGradeException(void) throw(){
    return ;
}

OfficeBlock::SignerLowGradeException& OfficeBlock::SignerLowGradeException::operator=(SignerLowGradeException const &rhs){
    static_cast <void> (rhs);
	return (*this); 
}
const char* OfficeBlock::SignerLowGradeException::what() const throw(){
    return msg.c_str();
}

//Low Exectioner Grade Exception
OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(void):msg("Executioner has to low a grade"){
    return ;
}

OfficeBlock::ExecuterLowGradeException::ExecuterLowGradeException(ExecuterLowGradeException const &other){
    *this = other;
	return ;
}
OfficeBlock::ExecuterLowGradeException::~ExecuterLowGradeException(void) throw(){
    return ;
}
OfficeBlock::ExecuterLowGradeException & OfficeBlock::ExecuterLowGradeException::operator=(ExecuterLowGradeException const &rhs){
    static_cast <void> (rhs);
	return (*this); 
}

const char* OfficeBlock::ExecuterLowGradeException::what() const throw(){
    return msg.c_str();
}