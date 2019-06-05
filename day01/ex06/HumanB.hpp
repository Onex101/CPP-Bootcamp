/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:47:16 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/05 08:38:34 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon*     oWeapon;
        std::string name;
    public:
        HumanB(std::string);
        void attack();
        void setWeapon(Weapon&);  
};

#endif
