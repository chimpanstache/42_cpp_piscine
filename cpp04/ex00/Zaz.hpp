/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zaz.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:02:49 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/24 13:05:47 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZAZ_HPP
#define ZAZ_HPP

#include <fstream>
#include <iostream>
#include "Victim.hpp"

class Zaz : public Victim
{
	public:
		Zaz(std::string name);
		Zaz &operator=(Zaz const & smth);
		Zaz(Zaz const & src);
		virtual ~Zaz();
		virtual void getPolymorphed() const ;
};



#endif