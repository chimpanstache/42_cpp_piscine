/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:40:32 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/25 11:58:27 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() { std::cout << "* teleports from space *" << std::endl; }

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	std::cout << "* teleports from space *" << std::endl; 
	*this = src;
} 

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const & rhs) 
{ 
	(void)rhs; 
	return *this; 
}

AssaultTerminator::~AssaultTerminator() { std::cout << "I’ll be back..." << std::endl; }

ISpaceMarine *AssaultTerminator::clone() const
{
	ISpaceMarine *clone = new AssaultTerminator;
	return clone;
}

void AssaultTerminator::battleCry() const { std::cout << "This code is unclean. PURIFY IT!" << std::endl; }

void AssaultTerminator::rangedAttack() const { std::cout <<  "* does nothing *" << std::endl; }

void AssaultTerminator::meleeAttack() const { std::cout << "* attacks with chainfists *" << std::endl; }
