/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 13:59:47 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 13:12:34 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <fstream>

class Enemy
{
	private:
		Enemy();
	
	protected:
		int _hp;
		std::string _type;

	public:
		Enemy(int hp, std::string const & type);
		Enemy &operator=(Enemy const & smth);
		Enemy(Enemy const & src); 
		virtual ~Enemy();

		std::string  const getType() const;
		int getHP() const;
		
		virtual void takeDamage(int);
};

#endif