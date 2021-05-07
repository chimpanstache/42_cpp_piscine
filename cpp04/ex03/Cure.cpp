/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:51:30 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/28 15:56:11 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { }
Cure::Cure(Cure const &src) : AMateria("cure")
{
	this->_type = src.getType();
	this->_xp = src.getXP();
	*this = src;
	return;
}

Cure &Cure::operator=(Cure const & rhs) 
{
	AMateria::operator=(rhs);
	return *this;
}

Cure::~Cure() {}

Cure* Cure::clone() const
{
	Cure *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
	AMateria::use(target);
}