/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:41:36 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/24 12:59:19 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <fstream>
#include <iostream>
#include "Victim.hpp"


class Peon : public Victim
{
	public:
		Peon(std::string name);
		Peon &operator=(Peon const & smth);
		Peon(Peon const & src);
		virtual ~Peon();
		virtual void getPolymorphed() const ;
};



















#endif 