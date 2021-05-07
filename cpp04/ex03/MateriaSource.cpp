/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:56:16 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 18:56:40 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _size_store(0)
{
	zero_store();
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	int i = 0;

	zero_store();
	_size_store = src._size_store;
	while(src._store[i] != NULL)
	{
		this->_store[i] = src._store[i]->clone();
		i++;
	}

}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	destroy_store();
	
	zero_store();
	int i = 0;
	_size_store = rhs._size_store;
	while(rhs._store[i] != NULL)
	{
		this->_store[i] = rhs._store[i]->clone();
		i++;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	destroy_store();
}

void MateriaSource::destroy_store()
{
	for (int i = 0 ; i < _size_store ; i++)
	{
		delete _store[i];
	}
	return ;	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i;
	i = 0;
	while (i < _size_store)
	{
		if (_store[i]->getType() == type)
			return _store[i]->clone();
		i++;
	}
	return 0;
}

unsigned int MateriaSource::materia_already_in_arr(AMateria* m)
{
	for (int i = 0; i < _size_store; i++) 
	{
		if (_store[i] == m)
			return 1;
	}
	return 0;
}

void MateriaSource::learnMateria(AMateria* src)
{
	unsigned int i;
	if (_size_store > 4)
	{
		std::cout << " storage full " << std::endl;
		return ;
	}	
	if (materia_already_in_arr(src) == 1)
	{
		std::cout << " materia already in store " << std::endl;
		return ;
	}	
	i = 0;
	while (_store[i] != NULL)
		i++;
	_store[i] = src;
	_size_store++;	
}

void MateriaSource::zero_store()
{
	unsigned int i;

	i = 0;
	while (i < 5)
	{
		_store[i] = NULL;
		i++;
	}
}

unsigned int MateriaSource::get_storeSize() const 
{
	return _size_store;
}