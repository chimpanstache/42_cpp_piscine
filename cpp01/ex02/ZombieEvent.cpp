/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:33 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 12:53:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	std::cout << "ZOMBIE EVENT CONSTRUCTOR" << std::endl;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "ZOMBIE EVENT DESTRUCTOR" << std::endl;		
}

void ZombieEvent::setZombieType(std::string type)
{
	this->_ZombieType = type;		
}

std::string ZombieEvent::getZombieType() const
{
	return this->_ZombieType;		
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zmb = new Zombie(name, getZombieType());
	return zmb;
}