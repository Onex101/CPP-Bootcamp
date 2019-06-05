/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:32:23 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/05 08:35:50 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon& oWeapon;
        std::string name;
    public:
        HumanA();
        ~HumanA();
        HumanA(std::string, Weapon&);
        void attack();
        void setName(std::string);
};

#endif
