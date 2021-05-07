/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aweapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:16:34 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 12:28:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <fstream>

class AWeapon
{
private:
	AWeapon();

protected:
	std::string _name;
	int _apcost;
	int _damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon &operator=(AWeapon const & smth);
	AWeapon(AWeapon const & src); 
	virtual ~AWeapon();
	std::string const getName() const;
	int getAPCost() const;
	int getDamage() const;

	virtual void attack() const = 0;
};

#endif