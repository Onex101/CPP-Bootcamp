/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 06:31:22 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/04 09:18:20 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

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
    Contact();
    void setData ();
    void getMinData(int i);
    void getAllData();
    std::string display(std::string str);
};

#endif