/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:26 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/09 15:19:52 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string nom, std::string type) : _name(nom), _type(type)
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

std::string Zombie::getType(void ) const
{
	return this->_name;
}

std::string Zombie::getName(void ) const 
{
	return this->_type;
}