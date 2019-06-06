/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 06:43:29 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/06 12:39:59 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int
main(int argc, char const *argv[])
{
    if (argc == 4)
    {
        std::string s1 = argv[2];
        std::string s2 = argv[3];
        std::string filename = argv[1];
        std::string newFileName = filename + ".replace";

        std::ifstream   readFile(filename);
        if (readFile.fail()){
            std::cout << "Error: File failes to open" << std::endl;
            exit(1);
        }
        std::ofstream    newFile(newFileName);
        if (newFile.fail()){
            std::cout << "Error: FNew File could not be created" << std::endl;
            exit(1);
        }

        std::string         buffer;
        while (std::getline(readFile, buffer))
        {
            while (buffer.find(s1) != std::string::npos)
            {
                buffer.replace(buffer.find(s1), s1.length(), s2);
            }
            newFile << buffer;
            newFile << std::endl;
        }
        if (buffer == "")
        {
            newFile << std::endl;
        }
        readFile.close();
        newFile.close();
    }
    else
    {
        std::cout << "Pass in the correct amount of strings" << std::endl;
    }
    return (0);
}