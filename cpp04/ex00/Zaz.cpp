/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zaz.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:02:21 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 12:08:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zaz.hpp"

Zaz::Zaz(std::string name) : Victim(name) 
{
	std::cout << "Prout Prout." << std::endl;
}

Zaz &Zaz::operator=(Zaz const & smth)
{
	this->_name = smth._name;
	return *this;	
}

Zaz::Zaz(Zaz const & src)
{
	*this = src;
	std::cout << "Prout Prout." << std::endl;
	return ;
}


Zaz::~Zaz()
{
	std::cout << "Toz..." << std::endl;
}


void Zaz::getPolymorphed() const
{
	std::cout << _name << " can't be turned into a cute pinky asshole ! He's already !" << std::endl;
}