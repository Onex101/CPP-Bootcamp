/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

    void getMinData(int i){
        std::cout<<"|"<<display(std::to_string(i))<<"|";
        std::cout<<display(firstName)<<"|";
        std::cout<<display(lastName)<<"|";
        std::cout<<display(nickName)<<"|"<<std::endl;
        // std::cout<<firstName<<"\t"<<lastName<<"\t"<<email<<"\t"<<phoneNumber<<std::endl;
    };

    void getAllData(){
        std::cout<<" First Name: "<<firstName
                 <<"\n Last Name: "<<lastName
                 <<"\n Nickname: "<<nickName
                 <<"\n Login: "<<login
                 <<"\n Postal Address: "<<postalAddress
                 <<"\n Email: "<<email
                 <<"\n Phone Number: "<<phoneNumber
                 <<"\n Birthday: "<<birthday
                 <<"\n Favourite Meal: "<<favMeal
                 <<"\n Underwear Color: "<<underwearColour
                 <<"\n Darkest Secret: "<<darkestSecret
                 <<"\n";
    }

    std::string display(std::string str) {
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

};

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
            if (i < 9){
                i++;
                Contact oContact;
                oContact.setData();
                Contacts[i] = oContact;
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