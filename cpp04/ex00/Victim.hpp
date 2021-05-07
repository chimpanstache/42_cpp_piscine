/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 10:51:16 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 19:57:37 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <fstream>

class Victim
{
	protected:
		std::string _name;

	private: 
		// Victim();

	public:
		Victim();
		Victim(std::string name);
		Victim &operator=(Victim const & smth); 
		Victim(Victim const & src);
		virtual ~Victim();		
		
		std::string getName( void ) const ;

		virtual void getPolymorphed() const ;

};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);






















#endif 