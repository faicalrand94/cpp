/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/23 13:24:12 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Nothing", 72, 45)
{
    std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
    this->target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << "n";
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& f) : Form(f.getName(), f.getSignd(), f.getExecute())
{
    std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;
    this->target = f.target;
}

void RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    std::cout << "RobotomyRequestForm assignment operateur called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if (this->getIssigned())
    {
        if (executor.getGrade())
        {
            std::fstream f;
            f.open(this->target + "_shrubbery", std::ios::out | std::ios::trunc);
            drawtree(f);
        }
    }
}