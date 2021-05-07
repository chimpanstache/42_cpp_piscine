/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:28:04 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:22:32 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon *_Grrrrr;	
	public:
	
		void attack( void);
		void setWeapon(Weapon &weap);
		HumanB(std::string set);
		~HumanB();	
};

#endif