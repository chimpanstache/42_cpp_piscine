/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:42:18 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:13:39 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() 
{
	return ;
}

Human::~Human()
{
	return ;
}

std::string const Human::identify() 
{
	return this->_brain.identify();
}

Brain  const  &Human::getbrain() 
{
	return this->_brain;
}
	