/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:46:23 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/12 10:27:01 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream> 
#include <string>
#include <regex>

struct Data {std::string s1; int n; std::string s2;};

Data *deserialize(void *raw){
    // std::string sString = reinterpret_cast<char *>(raw);
    // Data    *ret = new Data();
    // std::stringstream test(std::regex_replace(
    //     sString,
    //     std::regex("[^0-9]*([0-9]+).*"),
    //     std::string("\\1")
    // ));
    // test >> ret->n;
    // ret->s1 = sString.substr(0, 8);
    // ret->s2  = sString.substr(sString.length() - 8, sString.length());
    Data    *ret = reinterpret_cast<Data*>(raw);
    return (ret);
}

char * randAlphaString(int sizeOfString){
    char * c = new char[sizeOfString];
    int r;

    for (int i=0; i < sizeOfString; i++)
    {   
        r = rand() % 26;
        c[i] = 'a' + r;
    }
    return c;
}

void *serialize(void){ 
    srand (time(NULL));
    // std::string *ret = new std::string(randAlphaString(8) + std::to_string(rand()) + randAlphaString(8));
    // (void)ret;
    Data * oData = new Data();
    oData->n = rand();
    oData->s1 = randAlphaString(8);
    oData->s2 = randAlphaString(8);
    std::cout << "_____Original Data_____" << std::endl
              << "String 1: " << oData->s1 << std::endl
              << "String 2: " << oData->s2 << std::endl
              << "Number: " << oData->n << std::endl;
    return reinterpret_cast<void*>(oData);
}

int main(void){
    void * serialized = serialize();
    Data * oStruct = deserialize(serialized);
    std::cout << oStruct->s1 << oStruct->n << oStruct->s2 << std::endl;
    return (0);
}