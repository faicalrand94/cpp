/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 09:42:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/26 07:41:02 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Nothing", 145, 137)
{
    std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
    this->target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Nothing", 145, 137)
{
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called"<< std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& f) : Form(f.getName(), f.getSignd(), f.getExecute())
{
    std::cout << "ShrubberyCreationForm Copy constructor called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

void ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
    std::cout << "ShrubberyCreationForm assignment operateur called" << std::endl;
    this->target = f.target;
    this->setIssigned(f.getIssigned());
}

void drawtree(std::fstream &f)
{
    f << "        &&& &&  & &&" << std::endl;
    f << "      && &/&|& ()|/ @, &&" << std::endl;
    f << "    &/(/&/&||/& /_/)_&/_&" << std::endl;
    f << "   &() &/&|()|/&/ % & ()" << std::endl;
    f << "  &__&&_ |& |&&/&__%_/_& &&" << std::endl;
    f << "&&   && & &| &| /& & % ()& /&&" << std::endl;
    f << " ()&_---()&&|&&-&&--%---()~" << std::endl;
    f << "     &&     |||" << std::endl;
    f << "             |||" << std::endl;
    f << "             |||" << std::endl;
    f << "             |||" << std::endl;
    f << "       , -=-~  .-^- _" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getIssigned())
    {
        if (executor.getGrade())
        {
            std::fstream f;
            f.open(this->target + "_shrubbery", std::ios::out | std::ios::trunc);
            drawtree(f);
        }
        else
            throw GradeTooLowException();
    }
    else
        throw GradeTooLowException();
}