/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:51:30 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 11:00:15 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { }
Ice::Ice(Ice const &src) : AMateria("ice")
{
	this->_type = src.getType();
	this->_xp = src.getXP();
	*this = src;
	return;
}

Ice &Ice::operator=(Ice const & rhs) 
{
	AMateria::operator=(rhs);
	return *this;
}

Ice::~Ice() {}

Ice* Ice::clone() const
{
	Ice *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}