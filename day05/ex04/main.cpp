/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <xrhoda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 10:24:12 by xrhoda            #+#    #+#             */
/*   Updated: 2019/06/11 13:48:55 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern idiotOne;
    Bureaucrat hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;
    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutioner(hermes);
    try
    {
        ob.doBureaucracy("ShrubberyCreationForm", "Pigley");
    }
    catch (OfficeBlock::NoInternException & e)
    {
        std::cout << "    " << e.what() << std::endl;
    }
    catch (OfficeBlock::NoSignerException & e){
        std::cout << "    " << e.what() << std::endl;
    }
    catch (OfficeBlock::NoExecuterException & e){
        std::cout << "    " << e.what() << std::endl;
    }
    catch (OfficeBlock::ExecuterLowGradeException & e){
        std::cout << "    " << e.what() << std::endl;
    }
    catch (OfficeBlock::SignerLowGradeException & e){
        std::cout << "    " << e.what() << std::endl;
    }
    catch (std::exception &e){
        std::cout << "    " << e.what() << std::endl;
    }
}