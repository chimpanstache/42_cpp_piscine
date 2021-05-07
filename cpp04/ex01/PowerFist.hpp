/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:48:58 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 12:49:37 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "Aweapon.hpp"

class PowerFist : public AWeapon
{

public:
	PowerFist();
	PowerFist &operator=(PowerFist const & smth);
	PowerFist(PowerFist const & src); 
	virtual ~PowerFist();
	virtual void attack() const;

};

//////////////////////////////////////////////////////////////////////////////////////////////////////////

class PowerFoot : public AWeapon
{

public:
	PowerFoot();
	PowerFoot &operator=(PowerFoot const & smth);
	PowerFoot(PowerFoot const & src); 
	virtual ~PowerFoot();
	virtual void attack() const;

};


#endif 