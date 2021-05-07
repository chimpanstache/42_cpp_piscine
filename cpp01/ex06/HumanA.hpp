/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:27:52 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:25:33 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:	
		std::string _name;
		Weapon &_Grrrrr;
	public:

		void attack( void);
		std::string get_name( void ) const ;
		HumanA(std::string set, Weapon &weap);
		~HumanA();	

};

#endif