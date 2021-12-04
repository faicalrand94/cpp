/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/29 10:17:13 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Nothing", 25, 5)
{
    std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
    this->target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Nothing", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called"<< std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& f) : Form(f.getName(), f.getSignd(), f.getExecute())
{
    std::cout << "PresidentialPardonForm Copy constructor called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
    std::cout << "PresidentialPardonForm assignment operateur called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
    return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if (this->getIssigned())
    {
        if (executor.getGrade() <= this->getExecute())
        {
            std::cout << "<" << this->target << ">" << " has been pardoned by Zafod Beeblebrox.\n";
        }
    }
}
