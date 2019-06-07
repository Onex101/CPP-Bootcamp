/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:04:27 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/07 07:15:41 by xrhoda           ###   ########.fr       */
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
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &other);
        int     getRawBits(void) const;
        void    setRawBits(int const);
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
