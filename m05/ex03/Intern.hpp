/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 09:36:28 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/24 10:10:18 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <exception>
#include <fstream>
#include "Form.hpp"

class Intern : public Form
{
    public:
        Intern();
        Intern(std::string target);
        ~Intern();
        Intern(const Intern &f);
        void operator=(const Intern &f);
        Form* makeForm(std::string nameForm, std::string target);
};

#endif