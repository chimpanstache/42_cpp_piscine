/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 10:10:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/21 19:51:41 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTRAP_H
#define ScavTRAP_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string nom);
		ScavTrap(ScavTrap const &src);		
		ScavTrap &operator=(ScavTrap const &);
		std::string getname( void ) const;
		~ScavTrap();

		void challengeNewcomer(std::string const &target);

};

#endif