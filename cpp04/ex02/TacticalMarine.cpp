/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:40:32 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 20:07:58 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() { std::cout << "Tactical marine ready for battle !" << std::endl; }

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	std::cout << "Tactical marine ready for battle !" << std::endl; 
	*this = src; 
} 

TacticalMarine &TacticalMarine::operator=(TacticalMarine const & rhs) 
{ 
	(void)rhs;
	return *this;
}

TacticalMarine::~TacticalMarine() { std::cout << "Aaargh... " << std::endl; }

ISpaceMarine *TacticalMarine::clone() const
{
	ISpaceMarine *clone = new TacticalMarine;
	return clone;
}

void TacticalMarine::battleCry() const { std::cout << "For the holy PLOT!" << std::endl; }

void TacticalMarine::rangedAttack() const { std::cout << "* attacks with a bolter *" << std::endl; }

void TacticalMarine::meleeAttack() const { std::cout << "* attacks with a chainsword *" << std::endl; }
