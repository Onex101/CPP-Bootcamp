/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 06:34:40 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 09:18:28 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
    firstName = "";
    lastName = "";
    nickName = "";
    login = "";
    postalAddress = "";
    email = "";
    phoneNumber = "";
    birthday = "";
    favMeal = "";
    underwearColour = "";
    darkestSecret = "";
}

void Contact::setData(){
    std::cout<<"\nEnter First Name : ";
    std::getline(std::cin, firstName);

    std::cout<<"\nEnter Last Name : ";
    std::getline(std::cin, lastName);

    std::cout<<"\nEnter Nickname : ";
    std::getline(std::cin, nickName);

    std::cout<<"\nEnter Login : ";
    std::getline(std::cin, login);

    std::cout<<"\nEnter Postal Address : ";
    std::getline(std::cin, postalAddress);

    std::cout<<"\nEnter Email : ";
    std::getline(std::cin, email);

    std::cout<<"\nEnter Phone Number : ";
    std::getline(std::cin, phoneNumber);

    std::cout<<"\nEnter Birthday : ";
    std::getline(std::cin, birthday);

    std::cout<<"\nEnter Favourite Meal : ";
    std::getline(std::cin, favMeal);

    std::cout<<"\nEnter Underwear Colour : ";
    std::getline(std::cin, underwearColour);

    std::cout<<"\nEnter Darkest Secret : ";
    std::getline(std::cin, darkestSecret);
}


void Contact:: getMinData(int i){
    std::cout<<"|"<<display(std::to_string(i))<<"|";
    std::cout<<display(firstName)<<"|";
    std::cout<<display(lastName)<<"|";
    std::cout<<display(nickName)<<"|"<<std::endl;
    // std::cout<<firstName<<"\t"<<lastName<<"\t"<<email<<"\t"<<phoneNumber<<std::endl;
};

void Contact:: getAllData(){
    std::cout<<" First Name: "<<firstName
                <<"\n Last Name: "<<lastName
                <<"\n Nickname: "<<nickName
                <<"\n Login: "<<login
                <<"\n Postal Address: "<<postalAddress
                <<"\n Email: "<<email
                <<"\n Phone Number: "<<phoneNumber
                <<"\n Birthday: "<<birthday
                <<"\n Favourite Meal: "<<favMeal
                <<"\n Underwear Colour: "<<underwearColour
                <<"\n Darkest Secret: "<<darkestSecret
                <<"\n";
}

std::string Contact:: display(std::string str) {
    int size = str.length();
    std::string ret = "          ";
    
    if (size >= 10){
        ret = str.substr(0,10);
        ret[9] = '.';
        return ret;
    }
    size--;
    for (int i = 9; i >= 0; i--, size--){
        if (size < 0)
            break;
        ret[i] = str[size];
    }
    return (ret);
}