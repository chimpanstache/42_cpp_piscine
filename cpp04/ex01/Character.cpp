/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:04:34 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 19:24:38 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const & name) : _ap(40) , _name(name), _Weap(NULL) {}

Character::Character(Character const & src) 
{
	*this = src; 
}

Character &Character::operator=(Character const & src)
{
	this->_ap = src._ap;
	this->_name = src._name;
	this->_Weap = src._Weap;
	return *this;
} 

Character::~Character(){}

void Character::recoverAP()
{
	this->_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon* Weap)
{
	this->_Weap = Weap;
}

void Character::attack(Enemy* enemy)
{
	if (_Weap == NULL)
	{
		std::cout << " no Weapon " << std::endl;
		return ;
	}
	if (_Weap->getAPCost() > _ap)
	{
		std::cout << " no more AP " << std::endl;
		return ;
	}
	if (enemy == NULL)
	{
		std::cout << " enemy deadddddddd " << std::endl;
		return ;
	}
	this->_ap -= _Weap->getAPCost();
	if (_ap < 0)
        _ap = 0;
	std::cout << _name << " attacks "<< enemy->getType() << " with a " << _Weap->getName() << std::endl;
	_Weap->attack();
	enemy->takeDamage(_Weap->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const Character::getName() const
{
	return this->_name;
}

int Character::getAP() const
{
	return this->_ap;
}

AWeapon *Character::getWeapon() const
{
	return this->_Weap;
}

std::ostream & operator<<(std::ostream & o, Character const & rhs)
{
	if (rhs.getWeapon() != NULL)
		o << rhs.getName() << " has " << rhs.getAP() << " AP" << " and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAP() << " AP" << " and is unarmed " << std::endl; 
	return o;
}
