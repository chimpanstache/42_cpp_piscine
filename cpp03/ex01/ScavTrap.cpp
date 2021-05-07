/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:10:45 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 20:20:46 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "A ScavTrap is born !" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string nom) : _name(nom), _hit_points(100), _max_hit_points(100), \
_energy_points(50), _max_energy_points(50), _level(1), _melee_attack_damage(20),\
_ranged_attack_damage(15), _armor_damage_reduction(3) 
{
	std::cout << "A ScavTrap _named : " << _name << " is born !"<< std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) 
{
	std::cout << "A ScavTrap has been cloned !" << std::endl;	
	*this = src;
	return ;
}

std::string ScavTrap::getName(void) const
{
	return this->_name;	
}

unsigned int ScavTrap::getHitpoints(void) const
{
	return this->_hit_points;	
}

unsigned int ScavTrap::getEnergypoints(void) const
{
	return this->_energy_points;	
}


ScavTrap &ScavTrap::operator=(ScavTrap const & src)
{
	std::cout << "Assignment operator called in ScavTrap" << std::endl;
	this->_hit_points = src._hit_points; // should never be higher than max_hit_points
	this->_max_hit_points = src._max_hit_points;
	this->_energy_points = src._energy_points;// should never be higher than max_energy_points			
	this->_max_energy_points = src._max_energy_points;
	this->_level = src._level;
	this->_melee_attack_damage = src._melee_attack_damage;
	this->_ranged_attack_damage = src._ranged_attack_damage;
	this->_armor_damage_reduction = src._armor_damage_reduction;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " died, RIP ScavTrap" << std::endl;
	return ;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	sleep(1);
	std::cout << _name << " Took " << amount << " DAMAGES" << std::endl;	
	if ((amount + _armor_damage_reduction) >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << _name << " HP now: " << _hit_points << std::endl;		
		std::cout << _name << " Damages too high : RIP" << std::endl;
		// this->~ScavTrap();
		return ;
	}
	this->_hit_points = this->_hit_points - amount + _armor_damage_reduction;
	std::cout << _name << " HP now: " << _hit_points << std::endl;		
}

void ScavTrap::beRepaired(unsigned int amount)
{
	sleep(1);
	if ((this->_hit_points + amount) >= this->_max_hit_points)
	{
		std::cout << _name << " HP _level full !" << std::endl;
		this->_hit_points = _max_hit_points;
		return ;
	}
	std::cout << _name << " has been healed with " << amount << " REPARATION" << std::endl;	
	this->_hit_points = this->_hit_points + amount;
	std::cout << _name << " HP now: " << _hit_points << std::endl;	
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " RANGE ATTACK " << target <<
	" damaging => " << _ranged_attack_damage << " <= points!" << std::endl;	
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap " << _name << " MELEE ATTACK " << target <<
	" damaging => " << _melee_attack_damage << " <= points!" << std::endl;		
}

void ScavTrap::challengeNewcomer(std::string const &target)
{ 
	// std::cout << "challenge newcomer" << std::endl;
	sleep(1);
	srand(time(NULL));
	int randNum = (rand() % 5) + 1;
	if (randNum == 1)
	{
		std::cout << "ScavTrap " << _name << " Challenge " << target <<
		" to invade Baghdad in less than 1 week !" << std::endl;
	}
	else if (randNum == 2)
	{
		std::cout << "ScavTrap " << _name << " Challenge " << target << 
		" to invade Baghdad in less than 2 weeks !" << std::endl;
	}
	else if (randNum == 3)
	{
		std::cout << "ScavTrap " << _name << " Challenge " << target << 
		" to invade Baghdad in less than 3 weeks !" << std::endl;
	}
	else if (randNum == 4)
	{
		std::cout << "ScavTrap " << _name << " Challenge " << target << 
		" to invade Baghdad in less than 4 weeks !" << std::endl;
	}
	else if (randNum == 5)
	{
		std::cout << "ScavTrap " << _name << " Challenge " << target << 
		" to survive a press conference without eating a babouche !" << std::endl;
	}
}