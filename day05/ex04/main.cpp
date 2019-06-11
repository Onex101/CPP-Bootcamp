/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:24:12 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 07:54:08 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try{
        Bureaucrat high("high", 1);
	    Bureaucrat low("low", 150);

        Intern i;
        Form *f = i.makeForm("Shrubbery", "Onex"); 
        std::cout << *f << std::endl;

    }
    catch (ShrubberyCreationForm::GradeTooLowException &e)
    {
        std::cout << "    " << e.what() << std::endl;
    }

    try{
        Bureaucrat high("high", 1);
	    Bureaucrat low("low", 150);

        RobotomyRequestForm f("Test");
        std::cout << f << std::endl;

        low.setGrade(20);
        f.beSigned(low);
        f.execute(low);
        //scf.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    }

    try{
        Bureaucrat high("high", 1);
	    Bureaucrat low("low", 150);

        PresidentialPardonForm f("Test");
        std::cout << f << std::endl;

        low.setGrade(100);
        f.beSigned(low);
        f.execute(low);
        //scf.beSigned(b);
    }
    catch (std::exception & e)
    {
        std::cout << "    " << e.what() << std::endl;
    }
    
    
    return 1;
}