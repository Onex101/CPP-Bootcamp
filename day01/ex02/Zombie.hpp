/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:02:51 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 12:54:35 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie{
    private:
        std::string type;
        std::string name;

    public:
        Zombie();
        Zombie(std::string, std::string);
        ~Zombie();
        void setType(std::string);
        void setName(std::string);
        std::string getType();
        std::string getName();
        void announce();
};