/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 19:06:56 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 16:09:35 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;	
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
	std::cout << _name << ", " << _title << ", is born !" << std::endl;	
	return ;
}

Sorcerer &Sorcerer::operator=(Sorcerer const & smth)
{
	this->_name = smth._name;
	this->_title = smth._title;
	return *this;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;	
}

std::string Sorcerer::getName() const
{
	return this->_name;
}

std::string Sorcerer::getTitle() const
{
	return this->_title;
}

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs)
{
	o << "I am " << rhs.getName() << " " << rhs.getTitle() << " and I like ponies!" << std::endl;
	return o;
}

void Sorcerer::polymorph(Victim const &morphed) const 
{
	morphed.getPolymorphed();
}