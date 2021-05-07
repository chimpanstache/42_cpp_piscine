/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:07:56 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 11:53:02 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <ctype.h>
#include <iostream>
#include <string>

class Pony
{
	private:
		std::string SarahJessicaParker;
		std::string tail;	

	public:
		Pony(std::string Sarah);
		~Pony();
};

#endif

