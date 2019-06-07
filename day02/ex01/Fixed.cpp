/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:31 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/07 07:18:01 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
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

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
    return ;
}

float Fixed::toFloat(void) const{
    return this->_fixedPointValue / (float)(1<<Fixed::_fracBits);
}

int Fixed::toInt() const{
	return this->_fixedPointValue >> _fracBits;
}
