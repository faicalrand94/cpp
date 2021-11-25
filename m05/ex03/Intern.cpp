/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 10:12:11 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/25 05:21:25 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default constructor called" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called" << "\n";
}

Intern::Intern(const Intern &f)
{
    std::cout << "Intern Copy constructor called" << std::endl;
}

void Intern::operator=(const Intern &f)
{
    std::cout << "Intern assignment operateur called" << std::endl;
}

PresidentialPardonForm *ppf(std::string target)
{
    return (new PresidentialPardonForm(target));
}

RobotomyRequestForm *rrf(std::string target)
{
    return (new RobotomyRequestForm(target));
}

ShrubberyCreationForm *scf(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

Form* Intern::makeForm(std::string nameForm, std::string target)
{
    
    std::string forms[3] = {"presidential pardon" , "robotomy request", "shrubbery creation"};
    Form* (*ptr[3])();
    ptr[0] = ppf;
    ptr[1] = rrf;
    ptr[0] = scf;
    for (int i = 0; i < 3; i++)
    {
        if (nameForm == forms[i])
            return (pt[i]);
    }
    
}