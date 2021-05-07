/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 14:53:17 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/23 11:30:00 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_points; // should never be higher than max_hit_points
		unsigned int _max_hit_points;
		unsigned int _energy_points;	// should never be higher than max_energy_points			
		unsigned int _max_energy_points;
		unsigned int _level;
		unsigned int _melee_attack_damage;
		unsigned int _ranged_attack_damage;
		unsigned int _armor_damage_reduction;		

	public:
		ClapTrap();
		ClapTrap(std::string nom);
		ClapTrap(ClapTrap const &src);		
		ClapTrap &operator=(ClapTrap const &);
		virtual ~ClapTrap();

		std::string getName() const ;
		unsigned int getHitPoint() const ;
		unsigned int getEnergyPoint() const ;
		void setName(std::string nom); 

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);	
};

#endif