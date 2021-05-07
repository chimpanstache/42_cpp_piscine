/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:12:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 19:11:15 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}
AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}
AMateria::AMateria(AMateria const &src) 
{
	*this = src;
}

AMateria &AMateria::operator=(AMateria const & rhs)
{
    this->_xp = rhs.getXP();
	return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
	return this->_type;
}

unsigned int AMateria::getXP() const 
{
	return this->_xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}