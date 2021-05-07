/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:26 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 15:54:33 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("default"), _type("default")
{
	std::cout << _name << " MAN TURNT ZOMBIE" << std::endl;
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << ": ZOMBIE KILLED " << std::endl;	
	return ;
}

void Zombie::advert( void )
{
		
	std::cout << "< "<< _name << " " << _type << " > " << "Braiiiiiiinnnssss ..." << std::endl;		
	return ;
}

std::string Zombie::getName(void ) const
{
	return this->_name;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

std::string Zombie::getType(void ) const 
{
	return this->_type;
}

void Zombie::setType(std::string type) 
{
	this->_type = type;
	return ;
}
