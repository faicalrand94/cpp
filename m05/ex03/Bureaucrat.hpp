/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:45:21 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/23 11:41:05 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>


class Form;

class Bureaucrat
{
    private:
        const std::string name;
        int grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &f);
        void operator=(const Bureaucrat &f);
        class GradeTooHighException : public std::exception
        {
           const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
           const char *what() const throw();
        };
        void increment();
        void decrement();
        std::string getName() const;
        int getGrade() const;
        void signForm(Form &f) const;
        void executeForm(Form const & form);
};
std::ostream &operator<<( std::ostream &output, const Bureaucrat &o);

#endif