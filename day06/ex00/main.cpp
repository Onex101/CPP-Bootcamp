/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 06:41:57 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/12 10:54:32 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ostream>
#include <iomanip> 
#include <string>
#include <limits>
#include <cctype>

int main(int argc, char *argv[]){
    if (argc == 2){
        const char *str = argv[1];
        std::cout << std::fixed << std::setprecision(1);
        std::string oStr = str;
        int i = atoi(str);

        if (static_cast<char>(i)){
            if (std::isprint(static_cast<char>(i)))
                std::cout << "char: " << static_cast<char>(i) << std::endl;
            else
                std::cout << "char: non displayable" << std::endl;
        }
        else if (oStr.length() == 1 && std::isprint(static_cast<char>(str[0]))){
            std::cout << "char: " << static_cast<char>(str[0]) << std::endl;
        }
        else{
            std::cout << "char: impossible" << std::endl;
        }

        if (static_cast<int>(i)){
            std::cout << "int: " << static_cast<int>(i) << std::endl;
        }
        else
        {
            std::cout << "int: impossible" << std::endl;
        }
        
        try{
            float f = std::stof(str);
            std::cout << "float: " << static_cast<float>(f)  << 'f' << std::endl;
        }
        catch(std::exception &e){
            std::cout << "float: impossible" << std::endl;
        }
        try{
            double d = std::stof(str);
            std::cout << "double: " << static_cast<double>(d)<< std::endl;
        }
        catch(std::exception &e){
            std::cout << "double: impossible" << std::endl;
        }
    }
    return (0);
}