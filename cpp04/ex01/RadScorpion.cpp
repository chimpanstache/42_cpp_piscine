/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:25:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 14:37:35 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;	
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(src)
{
   std::cout << "* click click click *" << std::endl;
   *this = src;
}

RadScorpion &RadScorpion::operator=(RadScorpion const & src)
{
	this->_hp = src._hp;
	this->_type = src._type;
	return *this;	
}

void RadScorpion::takeDamage(int damage)
{
	if (damage > _hp)
	{
		_hp = 0;
		return ;
	}
	else 
		_hp -= damage; 
}