/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.wethinkcode.co.z    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:24:12 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/10 10:24:12 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat test("test", 150);

	std::cout << test << std::endl;


    std::cout << "__ 156 __" << std::endl;
    try
    {
    /* do some stuff with bureaucrats */
        Bureaucrat test("test", 156);
        std::cout << test << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    /* handle exception */
    }
    std::cout << "__ 0 __" << std::endl;
    try
    {
    /* do some stuff with bureaucrats */
        Bureaucrat test2("test2", 0);    
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    /* handle exception */
    }

    std::cout << "__ increment Grade  __" << std::endl;
    try
    {
    /* do some stuff with bureaucrats */
        Bureaucrat test3("test3", 1);    
        test3.incrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    /* handle exception */
    }
        std::cout << "__ decrement Grade __" << std::endl;
    try
    {
    /* do some stuff with bureaucrats */
        Bureaucrat test4("test4", 150);    
        test4.decrementGrade();
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    /* handle exception */
    }
}