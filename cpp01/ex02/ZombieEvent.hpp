/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 09:27:54 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class ZombieEvent 
{
	private:
		std::string _ZombieType;

	public:
		void setZombieType(std::string type);
		std::string getZombieType(void) const ;		
		Zombie *newZombie(std::string name);
		ZombieEvent();
		~ZombieEvent();
};

#endif 
