/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:46:11 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 11:53:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name) 
{
	std::cout << "Zog zog." << std::endl;
}

Peon &Peon::operator=(Peon const & smth)
{
	this->_name = smth._name;
	return *this;	
}

Peon::Peon(Peon const & src)
{
	*this = src;
	std::cout << "Zog zog." << std::endl;
	return ;
}


Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}


void Peon::getPolymorphed() const
{
	std::cout << _name << " has been turned into a pink pony! " << std::endl;
}