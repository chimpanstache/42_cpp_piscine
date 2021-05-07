/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:03:43 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 14:37:53 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(){}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type) {}

Enemy::~Enemy(){}

Enemy& Enemy::operator=(Enemy const& smth)
{
    _hp   = smth._hp;
    _type = smth._type;
    return *this;
}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
	return ;
}

std::string const Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage > _hp)
	{
		_hp = 0;
		return ;
	}
	else 
		_hp -= damage; 
}