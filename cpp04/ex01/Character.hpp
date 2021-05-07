/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:04:37 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 13:28:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <fstream>
#include "Aweapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		Character();

	protected:
		int _ap;
		std::string _name;
		AWeapon *_Weap;

	public:

		Character(std::string const & name);
		Character(Character const & src); 
		Character &operator=(Character const & src); 
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		AWeapon *getWeapon() const;
		std::string const getName() const;
		int getAP() const;

};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif