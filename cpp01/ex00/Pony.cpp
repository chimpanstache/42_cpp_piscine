/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:15:58 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/04 20:05:17 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string Sarah) : SarahJessicaParker(Sarah)
{
	std::cout << "PONY BORN " << SarahJessicaParker << std::endl;
}

Pony::~Pony()
{
	std::cout << "PONY SLAUGHTERED " << SarahJessicaParker << std::endl;	
}
