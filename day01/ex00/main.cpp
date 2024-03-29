/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:39:51 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 17:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(){
    Pony *oPony = new Pony("Test", "Test", 1);
    oPony->prntDetails();
    delete oPony;
}

void ponyOnTheStack(){
    Pony oPony;
    oPony.setAge(2);
    oPony.setColour("Test2");
    oPony.setName("Test2");
    oPony.prntDetails();
}

int main(){
    ponyOnTheHeap();
    ponyOnTheStack();
    return (0);
}