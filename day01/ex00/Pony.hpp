/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 07:54:44 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 11:55:56 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony{
    private: 
        std::string name;
        int age;
        std::string colour;

    public:
        Pony(void);
        Pony(std::string, std::string, int);
        ~Pony(void);
        void        setName(std::string);
        void        setAge(int);
        void        setColour(std::string);
        std::string getName(void);
        int         getAge(void);
        std::string getColour(void);
        void        prntDetails();
};

#endif