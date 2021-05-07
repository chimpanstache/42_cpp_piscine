/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:42:36 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 10:57:30 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

#include "Brain.hpp"

class Human
{
	private:
		const Brain _brain;
	
	public:
		Human();
		~Human();
		std::string const identify( void ) ;
		Brain const &getbrain( void )  ;
};

#endif