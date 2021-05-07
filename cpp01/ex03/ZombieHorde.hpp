/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:37:32 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 10:00:01 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
	private:
		unsigned int _hordeSize;

	public:
		Zombie *horde;
		ZombieHorde(unsigned int n);
		void set_hordeSize(unsigned int size);
		~ZombieHorde();
		void announce(); 
};

#endif