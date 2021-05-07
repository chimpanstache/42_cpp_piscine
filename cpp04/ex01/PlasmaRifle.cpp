/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:35:40 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 12:44:13 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon(src._name, src._apcost, src._damage)
{
	*this = src;
	return ;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const & src)
{
	 this->_name = src._name;
	 this->_apcost = src._apcost;
	 this->_damage = src._damage;
	 return *this;
}

PlasmaRifle::~PlasmaRifle()
{
	// std::cout << _name << << ", is dead. Consequences will ever be the same !" << std::endl;	
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}