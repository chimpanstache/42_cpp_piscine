/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 14:27:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 17:50:21 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string set, Weapon &weap) : _name(set), _Grrrrr(weap)
{
	
}

HumanA::~HumanA()
{
	
}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _Grrrrr.getType() << std::endl;
}

std::string HumanA::get_name( void ) const
{
	return this->_name;
}