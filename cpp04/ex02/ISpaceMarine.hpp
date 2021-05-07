/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:55:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/26 13:52:45 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPACEMARINE_HPP
#define SPACEMARINE_HPP

#include <iostream>
#include <fstream>

class ISpaceMarine
{
	public:
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};


#endif