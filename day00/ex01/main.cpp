/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:56:23 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/03 14:07:58 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact {
    public:
    std::string  firstName
                ,lastName
                ,nickName
                ,login
                ,postalAddress
                ,email
                ,phoneNumber
                ,birthday
                ,favMeal
                ,underwearColour
                ,darkestSecret;
    
  public:
    void setData (){
        std::cout<<"\n\tEnter First Name : ";
        std::cin>>firstName;
        std::cout<<firstName;

        std::cout<<"\n\tEnter Last Name : ";
        std::cin>>lastName;

        std::cout<<"\n\tEnter Nickname : ";
        std::cin>>nickName;

        std::cout<<"\n\tEnter Login : ";
        std::cin>>login;

        std::cout<<"\n\tEnter Postal Address : ";
        std::cin>>postalAddress;

        std::cout<<"\n\tEnter Email : ";
        std::cin>>email;

        std::cout<<"\n\tEnter Phone Number : ";
        std::cin>>phoneNumber;

        std::cout<<"\n\tEnter Birthday : ";
        std::cin>>birthday;

        std::cout<<"\n\tEnter Favourite Meal : ";
        std::cin>>favMeal;

        std::cout<<"\n\tEnter Underwear Colour : ";
        std::cin>>underwearColour;

        std::cout<<"\n\tEnter Darkest Secret : ";
        std::cin>>darkestSecret;
    }

    void getMinData(){
        std::cout<<firstName<<"\t"<<lastName<<"\t"<<email<<"\t"<<phoneNumber<<std::endl;
    };

    void getAllData(){
        std::cout<<firstName<<"\n"<<lastName<<"\n"<<nickName<<"\n"<<login<<"\n"<<postalAddress<<"\n"<<email<<"\n"<<phoneNumber<<"\n"<<birthday<<"\n"<<favMeal<<"\n"<<underwearColour<<"\n"<<darkestSecret<<"\n";
    }

};

bool is_number(const std::string& s){
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) 
        ++it;
    return !s.empty() && it == s.end();
}

int main() {
    bool exit = false;
    int i = -1;
    Contact Contacts[8];
    while (!exit){   
        std::cout << "Choose an input: ADD, SEARCH, EXIT" << std::endl;
        std::string sInput;
        std::cin >> sInput;
        if (sInput == "EXIT")
        {
            sInput = "";
            exit = true;
        }
        else if (sInput == "ADD")
        {
            i++;
            Contact oContact;
            oContact.setData();
            Contacts[i] = oContact;
            sInput = "";
        }
        else if (sInput == "SEARCH")
        {
            for (int j = 0; j <= i; ++j){
                std::cout<< "[" << j << "] "; 
                Contacts[j].getMinData();
            }
            std::string sSearchInput;
            std::cin >> sSearchInput;
            if (is_number(sSearchInput)){
                int iVal;
                iVal = std::stoi(sSearchInput);
                if (iVal <= i){
                    Contacts[iVal].getAllData();
                }
            }
            sInput = "";
        }
    }
    return 0;
}