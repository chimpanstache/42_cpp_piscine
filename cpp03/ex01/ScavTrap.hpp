/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:10:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/21 18:48:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTRAP_H
#define ScavTRAP_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class ScavTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string nom);
		ScavTrap(ScavTrap const &src);		
		ScavTrap &operator=(ScavTrap const &);
		std::string getName( void ) const;
		unsigned int getHitpoints( void ) const;
		unsigned int getEnergypoints( void ) const;
		~ScavTrap();

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const &target);

	private:	
		std::string _name;
		unsigned int _hit_points; // should never be higher than max_hit_points
		unsigned int _max_hit_points;
		unsigned int _energy_points;	// should never be higher than max_energy_points			
		unsigned int _max_energy_points;
		unsigned int _level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;		

};

#endif