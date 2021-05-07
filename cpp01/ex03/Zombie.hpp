/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:29 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 15:50:57 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <unistd.h>

class Zombie 
{

	public:
		void advert( void );
		std::string getType( void ) const ;
		std::string getName( void ) const ;	
		void setType( std::string type);
		void setName( std::string name);			
		Zombie();
		~Zombie();
	private:
		std::string _name;
		std::string _type;
};

#endif