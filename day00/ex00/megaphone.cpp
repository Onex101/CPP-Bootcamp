/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:27:38 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/03 10:07:05 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char *argv[]) 
{
    if (argc < 2)
        std::cout << "* LOAD AND UNBEARABLE FEEDBACK NOISE *";
    else{
        for (int i = 1; i < argc; ++i){
            for (int j = -1; j < (int)strlen((argv[i])); ++j)
            {
                argv[i][j] = toupper(argv[i][j]);
                std::cout << (char)toupper(argv[i][j]);
                
            }
        }
    }
    std::cout << '\n';
    return 0;
}