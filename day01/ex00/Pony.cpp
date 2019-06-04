/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 11:36:38 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 11:55:54 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(void)
{
    return ;
}

Pony::Pony(std::string name, std::string colour, int age)
{
    setName(name);
    setAge(age);
    setColour(colour);
    return ;
}

Pony::~Pony(void)
{
    return ;
}

void Pony::setName(std::string str)
{
    this->name = str;
    return ;
}

void Pony::setAge(int age)
{
    this->age = age;
    return ;
}

void Pony::setColour(std::string str)
{
    this->colour = str;
    return ;
}

std::string Pony::getName(void)
{
    return (this->name);
}

int Pony::getAge(void)
{
    return (this->age);
}

std::string Pony::getColour(void)
{
    return (this->colour);
}

void Pony::prntDetails()
{
    std::cout << "Pony's name is " << getName();
    std::cout << " their age is " << getAge();
    std::cout << " and their Colour is " << getColour() << std::endl;
}