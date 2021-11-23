/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:45:21 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/23 08:33:08 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name) , grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << "\n";
}
Bureaucrat::Bureaucrat(const Bureaucrat &f)
{
    std::cout << "Bureaucrat Copy constructor called" << std::endl;
    *this = f;
}
void Bureaucrat::operator=(const Bureaucrat &f)
{
    std::cout << "Bureaucrat assignment operateur called" << std::endl;
    this->grade = f.grade;
    if (this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

void Bureaucrat::increment()
{
    this->grade--;
    if (this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

void Bureaucrat::decrement()
{
    this->grade++;
    if (this->grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (this->grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}
int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::ostream &operator<<( std::ostream &output, const Bureaucrat &obj)
{
    output << "<" << obj.getName() << ">" << ", bureaucrat grade <" << obj.getGrade() << ">" << std::endl;
    return output;
}

void Bureaucrat::signForm(Form &f) const
{
    if (f.getIssigned() == true)
    {
        std::cout << "<" << this->name << "> signs <" << f.getName() << ">" << std::endl;
    }
    else
    {
        std::cout << "<" << this->name << "> cannot sign <" << f.getName() << "> because <Grade is too low>\n";
        throw GradeTooLowException();
    }
}