/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:38:45 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 10:03:58 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main ()
{
	std::cout << "//////////// Create zombies //////////" << std::endl;			
	ZombieHorde horde(8);		
	std::cout << "//////////// Announce horde //////////" << std::endl;		
	horde.announce();
	return (0);
}