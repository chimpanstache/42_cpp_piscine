/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:26:06 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 13:22:28 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{	

	public:
		SuperMutant();
		SuperMutant &operator=(SuperMutant const & src);
		SuperMutant(SuperMutant const & src); 
		virtual ~SuperMutant();
		
		virtual void takeDamage(int);
};

////////////////////////////////////////////////////////////////////////////////////////////////////

class SuperLutin : public Enemy
{	

	public:
		SuperLutin();
		SuperLutin &operator=(SuperLutin const & smth);
		SuperLutin(SuperLutin const & src); 
		virtual ~SuperLutin();
		
		virtual void takeDamage(int);
};

#endif