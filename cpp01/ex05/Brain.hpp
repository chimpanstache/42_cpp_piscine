/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:42:33 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 10:58:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	private:
		std::string _neurons;

	public:	
		std::string identify( void ) const  ;
		Brain(void );
		~Brain();

};

#endif