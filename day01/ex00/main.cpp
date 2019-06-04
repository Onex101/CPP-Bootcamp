/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:39:51 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 11:56:29 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(){
    Pony *oPony = new Pony("Test", "Test", 1);
    oPony->prntDetails();
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