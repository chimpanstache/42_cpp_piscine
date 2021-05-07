/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:27:58 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:20:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string set) : _name(set)
{
	
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weap)
{
	this->_Grrrrr = &weap;
}

void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _Grrrrr->getType() << std::endl;
}

