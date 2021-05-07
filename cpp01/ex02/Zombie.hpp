/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:29 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 09:28:45 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <ctype.h>
#include <iostream>
#include <string>

class Zombie 
{
	public:
		void advert( void );
		std::string getType( void ) const ;
		std::string getName( void ) const ;
		Zombie(std::string nom, std::string type);
		~Zombie();
	
	private:
		std::string _name;
		std::string _type;
};

#endif