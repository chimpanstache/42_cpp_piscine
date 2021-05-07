/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:53:40 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 19:09:56 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//////////////////////////////////////////// CANONICAL FORM ////////////////////////////////////////

ClapTrap::ClapTrap()
{
	std::cout << "A ClapTrap is born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string nom) : _name(nom), _hit_points(0), _max_hit_points(0), \
_energy_points(0), _max_energy_points(0), _level(0), _melee_attack_damage(0),\
_ranged_attack_damage(0), _armor_damage_reduction(0) 
{
	std::cout << "A fully loaded ClapTrap was born" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) 
{
	std::cout << "A ClapTrap has been cloned" << std::endl;
	*this = src;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & smth)
{
	this->_name = smth._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	sleep(1);
	std::cout << _name << " died, ClapTrap sent to Heaven (or Hell) " << std::endl;
	return ;
}

//////////////////////////////////// DAMAGES /////////////////////////////////////////////////

void ClapTrap::takeDamage(unsigned int amount)
{
	sleep(1);
	std::cout << _name << " Took " << amount << " DAMAGES" << std::endl;	
	if ((amount + _armor_damage_reduction) >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << _name << " HP now: " << _hit_points << std::endl;		
		std::cout << _name << " Damages too high : RIP" << std::endl;
		return ;
	}
	this->_hit_points = this->_hit_points - amount + _armor_damage_reduction;
	std::cout << _name << " HP now: " << _hit_points << std::endl;		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	sleep(1);
	if ((this->_hit_points + amount) >= this->_max_hit_points)
	{
		std::cout << _name << " HP level full !" << std::endl;
		this->_hit_points = _max_hit_points;
		return ;
	}
	std::cout << _name << " has been healed with " << amount << " REPARATION" << std::endl;	
	this->_hit_points = this->_hit_points + amount;
	std::cout << _name << " HP now: " << _hit_points << std::endl;		
}

////////////////////////////////////// ATTACKS /////////////////////////////////////////////////////

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap " << _name << " RANGE ATTACK " << target
	<< " damaging => " << _ranged_attack_damage << " <= points!" << std::endl;	
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap " << _name << " MELEE ATTACK " << target
	<< " damaging => " << _melee_attack_damage << " <= points!" << std::endl;		
}

//////////////////////////////////////// GETTERS & SETTERS //////////////////////////////////////////////////

std::string ClapTrap::getName( void ) const
{
	return this->_name;
}

unsigned int ClapTrap::getHitPoint( void ) const
{
	return this->_hit_points;
}

unsigned int ClapTrap::getEnergyPoint( void ) const
{
	return this->_energy_points;
}

void ClapTrap::setName(std::string nom)
{
	this->_name = nom;
	return ;
}