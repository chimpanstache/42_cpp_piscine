/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:14:50 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 19:15:21 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <stdio.h>

Character::Character(std::string const &nom) : _size_arr(0) ,_name(nom) 
{
	zero_arr();
}

Character::Character(Character const &src)
{
	this->_name = src.getName();
	_size_arr = src._size_arr;
	for (int i = 0; src._arr[i]; i++) 
	{
		if (_arr[i] != NULL || _arr[i] != 0)
			this->_arr[i] = src._arr[i]->clone();
		else
			_arr[i] = NULL;
	}
}

Character &Character::operator=(Character const &rhs)
{
	destroy_array();
	this->_name = rhs.getName();
	_size_arr = rhs._size_arr;
	for (int i = 0; i < 5; i++) 
	{
		if (_arr[i] != NULL || _arr[i] != 0)
			this->_arr[i] = rhs._arr[i]->clone();
		else
			_arr[i] = NULL;
	}
	return *this;
}

void Character::destroy_array() const
{
	for (int i = 0; i < _size_arr; i++) 
	{
			delete  _arr[i];
	}
	return ;
}

Character::~Character()
{
	destroy_array();
}

std::string const &Character::getName() const
{
	return this->_name;
}

unsigned int Character::materia_already_in_arr(AMateria* m)
{
	for (int i = 0; i < _size_arr; i++) 
	{
		if (_arr[i] == m)
			return 1;
	}
	return 0;
}	

unsigned int Character::get_arr_size() const
{
	return _size_arr;
}

void Character::equip(AMateria* m)
{
	if (materia_already_in_arr(m) != 0)
	{
		std::cout << "equip : Materia already in array" << std::endl;		
		return ;
	} 
	if (_size_arr >= 4)
	{
		std::cout << "equip : Materia array full" << std::endl;
		return ;
	}
	unsigned int i = 0;
	while (_arr[i] != NULL)
		i++;
	_arr[i] = m;
	_size_arr++;	
}

void Character::unequip(int idx)
{
	if (idx > (int)get_arr_size())
	{
		std::cout << "unequip : idx too high" << std::endl;
		return ;
	}
	if (_arr[idx] == NULL || idx < 0)
	{
		std::cout << "unequip : No materia at this idx" << std::endl;
		return ;
	}
	else 
	{
		for (int i = idx; i < _size_arr ; i++)	
			_arr[idx] = NULL;
	}
	_size_arr = idx;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > _size_arr - 1 || idx < 0)
	{
		std::cout << "use : idx too high or < 0" << std::endl;
		return ;
	}
	this->_arr[idx]->use(target);
}

int Character::getMateriaXP(int idx)
{
	if (idx > _size_arr)
	{
		std::cout << "getMateriaXP : idx too high" << std::endl;
		return -1;
	}
	return this->_arr[idx]->getXP();
}

void Character::zero_arr()
{
	int i = -1;
	while (++i < 5)
	{
		_arr[i] = NULL;
	}
}
