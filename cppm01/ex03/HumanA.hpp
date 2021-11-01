/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 18:45:39 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/30 20:15:34 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WUMANA_HPP
# define WUMANA_HPP

#include "Weapon.hpp"



class HumanA
{
private:
    Weapon &_wp;
    std::string name;
public:
    HumanA(std::string name, Weapon &wp);
    ~HumanA();
    void attack(void);
    Weapon getWeapon(void);
    void setWeapon(Weapon w);
};


#endif