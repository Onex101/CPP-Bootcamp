/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 07:14:16 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 09:17:55 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool is_number(const std::string s){
    int len = s.length();
    int i = 0;

    while (i < len){
        if (std::isdigit(s[i])){}
        else return false;
        i++;
    }
    return true;
}

int main() {
    bool exit = false;
    int i = -1;
    Contact Contacts[8];
    while (!exit){   
        std::cout << "Choose an input: ADD, SEARCH, EXIT" << std::endl;
        std::string sInput;
        std::getline(std::cin, sInput);
        // std::cin >> sInput;
        if (sInput == "EXIT")
        {
            sInput = "";
            exit = true;
        }
        else if (sInput == "ADD")
        {
            i++;
            if (i < 8){
                Contact oContact;
                oContact.setData();
                Contacts[i] = oContact;
            }
            else{
                i = 7;
                std::cout << "Sorry you cant store more than 8 contacts in this trial version. Please insert your credit card detials to unlock another 100 contacts spaces in your phonebook:" << std::endl;
                std::getline(std::cin, sInput);
                std::cout << "Thank you for trusting us. Your process should be done shortly. You will be able to enjoy your premium phonebook soon. If there are any problems, please do NOT call us" << std::endl;
            }
            sInput = "";
        }
        else if (sInput == "SEARCH")
        {
            std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
            for (int j = 0; j <= i; ++j){
                Contacts[j].getMinData(j);
            }
            std::cout << "Choose an index to display a contact's full details: ";
            std::string sSearchInput;
            std::getline(std::cin, sSearchInput);
            if (sSearchInput.length() > 0 && is_number(sSearchInput)){
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