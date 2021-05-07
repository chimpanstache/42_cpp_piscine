/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:20:43 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 20:21:37 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "A NinjaTrap is born !" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string nom) 
{
	_name = nom;
	_hit_points = 60;
	_max_hit_points = 60;
	_energy_points = 120;
	_max_energy_points = 120;
	_level = 1;
	_melee_attack_damage = 60;
	_ranged_attack_damage = 5;
	_armor_damage_reduction = 0;	
	std::cout << "A NinjaTrap named : " << _name << " is born !"<< std::endl;
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) 
{
	std::cout << "A NinjaTrap has been cloned !" << std::endl;		
	*this = src;
	return ;
}

std::string NinjaTrap::getname(void) const
{
	return this->_name;	
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const & src)
{
	//  std::cout << "Assignment operator called in ScavTrap" << std::endl;
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

NinjaTrap::~NinjaTrap()
{
	std::cout << _name << " died, RIP NinjaTrap" << std::endl;
	return ;
}

//////////////////////////////////// ORIGINAL SKILLS ///////////////////////////////////////////

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{ 
	std::cout << std::endl;	
	std::cout << "NinjaTrap " << target.getName() << " dared to attack " << this->_name << " !" << std::endl;
	std::cout << this->_name << " counter attack with a NinjaShoebox GRRRRRRRRRR PAH! La mala est gangx. => 30 <= damages !" << std::endl;
	std::cout << "If you don't have the ref : https://www.youtube.com/watch?v=lbeUyW6axeA&ab_channel=GAZOOFFICIEL" << std::endl;
}
void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{ 
	std::cout << std::endl;	
	std::cout << "ScavTrap " << target.getName() << " dared to attack " << this->_name << " !" << std::endl;
	std::cout << this->_name << " counter attack with a NinjaShoebox GRRRRRRRRRR PAH! La mala est gangx. => 30 <= damages !" << std::endl;
	std::cout << "If you don't have the ref : https://www.youtube.com/watch?v=lbeUyW6axeA&ab_channel=GAZOOFFICIEL" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{ 
	std::cout << std::endl;	
	std::cout << "FragTrap " << target.getName() << " dared to attack " << this->_name << " !" << std::endl;
	std::cout << this->_name << " counter attack with a NinjaShoebox GRRRRRRRRRR PAH! La mala est gangx. => 30 <= damages !" << std::endl;
	std::cout << "If you don't have the ref : https://www.youtube.com/watch?v=lbeUyW6axeA&ab_channel=GAZOOFFICIEL" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target)
{ 
	std::cout << std::endl;	
	std::cout << "ClapTrap " << target.getName() << " dared to attack " << this->_name << " !" << std::endl;
	std::cout << this->_name << " counter attack with a NinjaShoebox GRRRRRRRRRR PAH! La mala est gangx. => 30 <= damages !" << std::endl;
	std::cout << "If you don't have the ref : https://www.youtube.com/watch?v=lbeUyW6axeA&ab_channel=GAZOOFFICIEL" << std::endl;
}