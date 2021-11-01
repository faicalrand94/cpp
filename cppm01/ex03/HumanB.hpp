/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:28:02 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/31 12:59:53 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WUMANB_HPP
# define WUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *_wp;
        std::string name;
    public:
        HumanB(std::string name);
        void attack(void);
        ~HumanB();
        Weapon *getWeapon(void);
        void setWeapon(Weapon &w);
};



#endif