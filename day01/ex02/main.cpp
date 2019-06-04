/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:02:39 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 13:00:33 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main(){

    std::string arrEventTypes[4] = {"Type1", "Type2", "Type3", "Type4"};
    std::string arrNames[5] = {"Name1", "Name2", "Name3", "Name4", "Name5"};

    for (int i = 0; i < 4; i++){
        ZombieEvent oZombieEvent = ZombieEvent(arrEventTypes[i]);
        for (int j = 0; j < 5; j++){
            Zombie *oZombie = oZombieEvent.newZombie(arrNames[j]);
            oZombie->announce();
            delete oZombie;
        }
    }
    return 0;
}