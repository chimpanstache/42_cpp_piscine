/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 12:20:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 18:43:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string nom);
		NinjaTrap(int smth);
		NinjaTrap(NinjaTrap const &src);		
		NinjaTrap &operator=(NinjaTrap const &);
		std::string getname( void ) const;
		~NinjaTrap();

		void ninjaShoebox(NinjaTrap const &target);
		void ninjaShoebox(ClapTrap const &target);
		void ninjaShoebox(ScavTrap const &target);	
		void ninjaShoebox(FragTrap const &target);
	private:	
};

#endif