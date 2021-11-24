/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/24 04:22:09 by fbouibao         ###   ########.fr       */
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
    this->setIssigned(f.getIssigned());
}

void RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
    std::cout << "RobotomyRequestForm assignment operateur called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(0));
    
    int random = rand() % 100 + 1;
    if (this->getIssigned())
    {
        if (executor.getGrade())
        {
            if (random > 50)
            {
                std::cout << "<" << this->target << "> has been robotomized successfully 50% ofthe time\n";
            }
            else
            {
                std::cout << "<" << this->target << "> it’s a failure\n";
            }
        }
        else
            throw GradeTooLowException();
    }
    else
        throw GradeTooLowException();
}