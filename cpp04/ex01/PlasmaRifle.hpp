/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:35:59 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 12:43:39 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "Aweapon.hpp"

class PlasmaRifle : public AWeapon
{

public:
	PlasmaRifle();
	PlasmaRifle &operator=(PlasmaRifle const & src);
	PlasmaRifle(PlasmaRifle const & src); 
	virtual ~PlasmaRifle();
	virtual void attack() const;

};




#endif 