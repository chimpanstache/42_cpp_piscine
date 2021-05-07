/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:48:15 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 12:00:11 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <fstream>
#include <iostream>
#include "AMateria.hpp"


class Ice : public AMateria
{
	
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const &src); //copy
		virtual Ice &operator=(Ice const & rhs); //assignation
		virtual ~Ice();
	
		virtual Ice	*clone() const;
		virtual void use(ICharacter& target);
};


#endif