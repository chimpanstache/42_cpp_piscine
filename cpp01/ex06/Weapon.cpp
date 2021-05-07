/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:56:23 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 17:29:37 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string set ) : _type(set)
{
	// std::cout << "Grrrrrrk pah!" << std::endl;	
}

Weapon::~Weapon( void ) 
{
	// std::cout << "peace" << std::endl;	
}

void Weapon::setType( std::string reset)
{
	this->_type = reset;
	return;
}

std::string const &Weapon::getType( void) const
{
	return this->_type;
}