/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:34:43 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/25 12:32:08 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
    private:
        const std::string name;
        bool _issigned;
        const int signgrade;
        const int executegrade;
        

    public:
        Form();
        Form(const std::string name, const int signgrade, const int executegrade);
        virtual ~Form();
        Form(const Form &f);
        void operator=(const Form &f);
        std::string getName() const;
        bool getIssigned() const;
        void setIssigned(bool);
        int getSignd() const;
        int getExecute() const;
        void beSigned(Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
           const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
           const char *what() const throw();
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
};
std::ostream &operator<<( std::ostream &output, Form &f);

#endif