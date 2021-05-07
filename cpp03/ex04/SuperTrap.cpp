/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:07:08 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 10:30:28 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	std::cout << "A SuperTrap is born !" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string nom) : NinjaTrap(2), FragTrap(2)
{
	_name = nom;  
	_level = 1;
	std::cout << "A SuperTrap named : " << _name << " is born !"<< std::endl;
	return ;
}

SuperTrap::SuperTrap(SuperTrap const & src) : NinjaTrap(src), FragTrap(src)
{
	std::cout << "A SuperTrap has been cloned !" << std::endl;
	this->_name = src._name;
	*this = src;
	return ;
}

std::string SuperTrap::getname(void) const
{
	return this->_name;	
}

unsigned int SuperTrap::getHitPoint( void ) const
{
	return this->_hit_points;	
}

unsigned int SuperTrap::getMaxHitPoint( void ) const
{
	return this->_max_hit_points;	
}

unsigned int SuperTrap::getEnergyPoint( void ) const
{
	return this->_energy_points;	
}

unsigned int SuperTrap::getMaxEnergyPoint( void ) const
{
	return this->_max_energy_points;	
}

unsigned int SuperTrap::getLevel( void ) const
{
	return this->_level;	
}

unsigned int SuperTrap::getMeleeAttackDamage( void ) const
{
	return this->_melee_attack_damage;	
}

unsigned int SuperTrap::getRangedAttackDamage( void ) const
{
	return this->_ranged_attack_damage;	
}

unsigned int SuperTrap::getArmorDamageReduction( void ) const
{
	return this->_armor_damage_reduction;	
}

SuperTrap &SuperTrap::operator=(SuperTrap const & src)
{
	std::cout << "Assignment operator called in SuperTrap" << std::endl;
	_hit_points = src._hit_points;
	_max_hit_points = src._max_hit_points;
	_energy_points = src._energy_points;
	_max_energy_points = src._max_energy_points;
	_level = src._level;
	_melee_attack_damage = src._melee_attack_damage;
	_ranged_attack_damage = src._ranged_attack_damage;
	_armor_damage_reduction = src._armor_damage_reduction;	
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << _name << " died, RIP SuperTrap" << std::endl;
	return ;
}

//////////////////////////////////// ATTACKS ///////////////////////////////////////////

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}