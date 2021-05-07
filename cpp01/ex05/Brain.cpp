/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:42:23 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 10:58:23 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : _neurons("neurons")
{
	return ;
}

Brain::~Brain()
{
	return ;
}

std::string Brain::identify() const
{
	std::ostringstream ss;
	ss << this;
	std::string str = ss.str();
	return str;
}