/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 11:34:43 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/29 10:05:43 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

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
        ~Form();
        Form(const Form &f);
        Form &operator=(const Form &f);
        class GradeTooHighException : public std::exception
        {
           const char *what() const throw();
        };
        
        class GradeTooLowException : public std::exception
        {
           const char *what() const throw();
        };
        std::string getName() const;
        bool getIssigned() const;
        int getSignd() const;
        int getExecute() const;
        void beSigned(Bureaucrat &b);
};
std::ostream &operator<<( std::ostream &output, const Form &f);

#endif