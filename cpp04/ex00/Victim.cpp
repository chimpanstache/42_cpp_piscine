/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:51:18 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 11:54:39 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{

}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared! " << std::endl;  
}

Victim::Victim(Victim const & src)
{
	*this = src;
	std::cout << "Some random victim called " << _name << " just appeared! " << std::endl;  
	return ;
}

std::string Victim::getName( void ) const
{
	return this->_name;
}

Victim &Victim::operator=(Victim const & smth)
{
	this->_name = smth._name;
	return *this; 
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

std::ostream & operator<<(std::ostream & o, Victim const & rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return o;
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep! " << std::endl;
}