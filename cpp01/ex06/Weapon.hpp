/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:56:21 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:28:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <sstream>


class Weapon
{
	private:
		std::string _type;
	
	public:
		void setType( std::string set );
		std::string const &getType( void ) const;

		Weapon(std::string set);
		~Weapon( void );
};

#endif