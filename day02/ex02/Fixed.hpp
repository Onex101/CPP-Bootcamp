/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:27 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/06 13:18:25 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
    private:
        int                 _fixedPointValue;
        static const int    _fracBits = 8;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &other);
        bool    operator>(const Fixed &other);
        bool    operator<(const Fixed &other);
        bool    operator>=(const Fixed &other);
        bool    operator<=(const Fixed &other);
        bool    operator==(const Fixed &other);
        bool    operator!=(const Fixed &other);
        Fixed   operator+(const Fixed &other);
        Fixed   operator-(const Fixed &other);
        Fixed   operator*(const Fixed &other);
        Fixed   operator/(const Fixed &other);
        Fixed   &operator++();
        Fixed   operator++(int);
        Fixed   &operator--();
        Fixed   operator--(int);
        int     getRawBits(void) const;
        const int getFracBits(void);
        void    setRawBits(int const);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

Fixed Fixed::min(Fixed a, Fixed b){
    return ((a > b) ? a : b);
}

Fixed Fixed::max(Fixed a, Fixed b){
    return ((a < b) ? a : b);
}


#endif
