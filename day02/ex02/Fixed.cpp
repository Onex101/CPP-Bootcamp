/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/06 13:51:05 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>


Fixed::Fixed(void){
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
    return ;
}

Fixed::~Fixed(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
    return ;
}

Fixed::Fixed(const int i){
    if (i < 0)
        this->_fixedPointValue = 0;
    else
        this->_fixedPointValue = i << _fracBits;
    return ;
}

Fixed::Fixed(const float f){
    if (f < 0)
        this->_fixedPointValue = 0;
    else
        this->_fixedPointValue = (int)roundf((f * (double)(1 << _fracBits)));
    return ;
}


Fixed &Fixed::operator=(const Fixed &other){
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = other.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &other){
    return (this->_fixedPointValue > other._fixedPointValue);
}

bool Fixed::operator<(const Fixed &other){
    return (this->_fixedPointValue < other._fixedPointValue);
}

bool Fixed::operator>=(const Fixed &other){
    return (this->_fixedPointValue >= other._fixedPointValue);
}

bool Fixed::operator<=(const Fixed &other){
    return (this->_fixedPointValue <= other._fixedPointValue);
}

bool Fixed::operator==(const Fixed &other){
    return (this->_fixedPointValue == other._fixedPointValue);
}

bool Fixed::operator!=(const Fixed &other){
    return (this->_fixedPointValue != other._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &other){
    Fixed fix = Fixed(this->toFloat() + other.toFloat());
    return (fix);
}

Fixed Fixed::operator-(const Fixed &other){
    Fixed fix(this->toFloat() - other.toFloat());
    return (fix);
}

Fixed Fixed::operator*(const Fixed &other){
    Fixed fix(this->toFloat() * other.toFloat());
    return (fix);
}

Fixed Fixed::operator/(const Fixed &other){
    if (other.toFloat() > 0)
        return (Fixed(this->toFloat() / other.toFloat()));
    else
        return (Fixed(-1));
}

Fixed &Fixed::operator++(){
    this->_fixedPointValue++;
    return (*this);
}

Fixed Fixed::operator++(int i){
    Fixed old(*this);
    operator++();
    return (old);
}

Fixed &Fixed::operator--(){
    this->_fixedPointValue--;
    return (*this);
}

Fixed Fixed::operator--(int i){
    Fixed old(*this);
    operator--();
    return (old);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

const int Fixed::getFracBits(void){
    std::cout << "getFracBits member function called" << std::endl;
    return (this->_fracBits);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
    return ;
}

float Fixed::toFloat(void) const{
    return this->_fixedPointValue / (float)(1 << _fracBits);
}

int Fixed::toInt() const
{
	return this->_fixedPointValue >> _fracBits;
}


