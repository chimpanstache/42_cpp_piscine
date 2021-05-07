/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:07:14 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 18:49:43 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_H
#define SUPERTRAP_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "SuperTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string nom);
		SuperTrap(SuperTrap const &src);		
		SuperTrap &operator=(SuperTrap const &);
		std::string getname( void ) const;
		unsigned int getHitPoint( void ) const;
		unsigned int getMaxHitPoint( void ) const;
		unsigned int getEnergyPoint( void ) const;
		unsigned int getMaxEnergyPoint( void ) const;
		unsigned int getLevel( void ) const;
		unsigned int getMeleeAttackDamage( void ) const;
		unsigned int getRangedAttackDamage( void ) const;
		unsigned int getArmorDamageReduction( void ) const;
		~SuperTrap();

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

	private:
		SuperTrap();

};




# endif 