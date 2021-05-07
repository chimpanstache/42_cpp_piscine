/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:50:03 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 15:10:45 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const & src) : AWeapon(src._name, src._apcost, src._damage)
{
	*this = src;
	return ;
}

PowerFist::~PowerFist()
{
	// std::cout << _name << << ", is dead. Consequences will ever be the same !" << std::endl;	
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist &PowerFist::operator=(PowerFist const & src)
{
	 this->_name = src._name;
	 this->_apcost = src._apcost;
	 this->_damage = src._damage;
	 return *this;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

PowerFoot::PowerFoot() : AWeapon("Power Foot", 9, 60) {}

PowerFoot::PowerFoot(PowerFoot const & src) : AWeapon(src._name, src._apcost, src._damage)
{
	*this = src;
	return ;
}

PowerFoot::~PowerFoot()
{
	// std::cout << _name << << ", is dead. Consequences will ever be the same !" << std::endl;	
}

void PowerFoot::attack() const
{
	std::cout << "* Penalty dans ta tete *" << std::endl;
}

PowerFoot &PowerFoot::operator=(PowerFoot const & src)
{
	 this->_name = src._name;
	 this->_apcost = src._apcost;
	 this->_damage = src._damage;
	 return *this;
}