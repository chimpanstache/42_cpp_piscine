/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:10:45 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 20:22:07 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "A FragTrap is born" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string nom)
{
	_name = nom;
	_hit_points = 100; // should never be higher than max_hit_points
	_max_hit_points = 100;
	_energy_points = 100;	// should never be higher than max_energy_points			
	_max_energy_points = 100;
	_level = 1;
	_melee_attack_damage = 30;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
	std::cout << "A FragTrap named : " << _name << " is born !"<< std::endl;
	return ;
}

FragTrap::FragTrap(int smth)
{
	(void) smth;
	_hit_points = 100; // should never be higher than max_hit_points
	_max_hit_points = 100;
	_ranged_attack_damage = 20;
	_armor_damage_reduction = 5;
std::cout << "A FragTrap named : " << _name << " is born !"<< std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) 
{
	std::cout << "A FragTrap has been cloned" << std::endl;
	*this = src;
	return ;
}

FragTrap &FragTrap::operator=(FragTrap const & src)
{
	std::cout << "FragTrap has been assigned values" << std::endl;
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

FragTrap::~FragTrap()
{
	sleep(1);
	std::cout << this->_name << " died, RIP FragTrap" << std::endl;
	return ;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energy_points < 25)
	{
		std::cout << "not enough energy" << std::endl;
	}	
	else 
	{
		this->_energy_points -= 25;
		std::cout << "VAULTHUNTER.EXE" << std::endl;
		sleep(1);
		srand(time(NULL));
		int randNum = (rand() % 5) + 1;
		if (randNum == 1)
			rangedAttack(target);
		else if (randNum == 2)
			meleeAttack(target);
		else if (randNum == 3)
		{
			std::cout << "FragTrap " << this->_name << " FRONTAL ATTACK " << target
			<< " damaging => " << _ranged_attack_damage << " <= points!" << std::endl;		
		}
		else if (randNum == 4)
		{
			std::cout << "FragTrap " << this->_name << " SNEAKY ATTACK " << target
			<< " damaging => " << _ranged_attack_damage << " <= points!" << std::endl;				
		}	
		else if (randNum == 5)
		{
			std::cout << "FragTrap " << this->_name << " BABOUCHE ATTACK " << target
			<< " damaging => " << _ranged_attack_damage << " <= points!" << std::endl;			
		}
	}
}