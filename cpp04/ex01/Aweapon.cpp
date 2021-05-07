
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:16:28 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/24 13:28:53 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	
}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
	return ;
}

AWeapon &AWeapon::operator=(AWeapon const & src)
{
	this->_apcost = src._apcost;
	this->_damage = src._damage;
	this->_name = src._name;
	return *this;
}

AWeapon::~AWeapon() {}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}

std::string const AWeapon::getName() const
{
	return this->_name;
}

