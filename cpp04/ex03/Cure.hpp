/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:48:15 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/28 14:51:00 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
#define Cure_HPP

#include <fstream>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure(std::string const & type);
		Cure(Cure const &src); //copy
		virtual Cure &operator=(Cure const & rhs); //assignation
		virtual ~Cure();
	
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
};


#endif