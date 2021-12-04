/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 02:51:37 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/29 10:11:52 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : name("nothing"), signgrade(150), executegrade(150)
{
    std::cout << "Form Default constructor called" << std::endl;
    _issigned = false;
}

Form::Form(const std::string n, const int s, const int e) : name(n), signgrade(s), executegrade(e)
{
    std::cout << "Form constructor called" << std::endl;
    _issigned = false;
    if (this->signgrade < 1 || this->executegrade < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (this->signgrade > 150 || this->executegrade > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::~Form()
{
    std::cout << "Form destructor called"<< std::endl;
}

Form::Form(const Form &f) : name(f.name), signgrade(f.signgrade), executegrade(f.executegrade)
{
    std::cout << "Form Copy constructor called" << std::endl;
    this->_issigned = f._issigned;
}

Form &Form::operator=(const Form &f)
{
    std::cout << "Form assignment operateur called" << std::endl;
    this->_issigned = f._issigned;
    return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

// * Getters * //

std::string Form::getName() const
{
    return (this->name);
}

bool Form::getIssigned() const
{
    return (this->_issigned);
}

void Form::setIssigned(bool b)
{
    this->_issigned = b;
}

int Form::getSignd() const
{
    return (this->signgrade);
}

int Form::getExecute() const
{
    return (this->executegrade);
}

// End Getters

void Form::beSigned(Bureaucrat &b)
{
    if (b.getGrade() <= this->signgrade)
        this->_issigned = true;
}

std::ostream &operator<<( std::ostream &output, Form &f)
{
    output << "<" << f.getName() << ">" << ", form sign grade <" << f.getSignd() << ">" << ", form execute grade <" << f.getExecute() << ">";
    if (f.getIssigned())
        output << " and This Form is signed\n";
    else
        output << " and This Form is not signed\n";
    return output;
}