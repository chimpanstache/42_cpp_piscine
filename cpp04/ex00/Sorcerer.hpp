/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 18:58:36 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 19:52:13 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include <fstream>
#include "Victim.hpp"

class Sorcerer
{
	protected:
		std::string _name;
		std::string _title;

	private:
		Sorcerer();
	
	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer &operator=(Sorcerer const & smth);
		Sorcerer(Sorcerer const & src);
		~Sorcerer();

		std::string getName( void ) const;
		std::string getTitle( void ) const; 

		void polymorph(Victim const &) const; 


};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);








#endif



