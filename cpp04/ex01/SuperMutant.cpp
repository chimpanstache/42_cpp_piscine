/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 18:56:21 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;	
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	*this = src;
}

SuperMutant &SuperMutant::operator=(SuperMutant const & src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;	
}

void SuperMutant::takeDamage(int damage)
{
	if ((damage / 3) > this->_hp)
	{	
		this->_hp = 0;
		return ;
	}
	else 
		_hp -= (damage / 3); 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

SuperLutin::SuperLutin() : Enemy(190, "Super Lutin")
{
	std::cout << "HAHAHAHAHAHAHAH" << std::endl;
}

SuperLutin::~SuperLutin()
{
	std::cout << "NOOOOOOO" << std::endl;	
}

SuperLutin::SuperLutin(SuperLutin const & src) : Enemy(src)
{
	std::cout << "OOOOOOOOOOOOOOOOOOO" << std::endl;
	*this = src;
}

SuperLutin &SuperLutin::operator=(SuperLutin const & src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;	
}

void SuperLutin::takeDamage(int damage)
{
	if ((damage / 2) > this->_hp)
	{
		this->_hp = 0;	
		return ;
	}
	else 
		_hp -= (damage / 2); 
}