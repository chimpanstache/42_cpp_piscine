/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:19:18 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 20:32:51 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <stdio.h>

Squad::Squad() : _count(0), _squad(NULL) {}
Squad::~Squad()
{
	destroy_squad();
}

Squad::Squad(Squad const &src) 
{
	squad_list *src_ptr;
	squad_list *new_link;
	unsigned int i;

	this->_count = src._count;
	i = 0;
	src_ptr = src._squad;
	while (src_ptr)
	{
		if (src_ptr->next == 0)
			break ;
		else
			src_ptr = src_ptr->next;
	}

	while (src_ptr)
	{
		new_link = new squad_list;
		new_link->data = src_ptr->data->clone();
		if (i == 0)
		{
			new_link->next = 0;
			new_link->previous = 0;
		}
		else
		{		
			new_link->next = _squad;
			new_link->previous = 0;
			_squad->previous = new_link;
		}
		_squad = new_link;
		i++;
		if (src_ptr->previous != 0)
			src_ptr = src_ptr->previous;
		else 
			break;
	}

	return;
}

void Squad::destroy_squad()
{
	squad_list *current_squad;
	squad_list *ptr;
	int total_count;

	current_squad = _squad;
	total_count = _count;
	if (_squad == NULL)
	{	
		std::cout << "GOAT" << std::endl;	
		return ;
	}
	while (current_squad)
	{
		if (current_squad->next == 0)
			break ;
		else
			current_squad = current_squad->next;
	}
	while (current_squad)
	{
		if (current_squad->data)
			delete current_squad->data;
		ptr = current_squad;
		current_squad = current_squad->previous;
		delete ptr;
		total_count--;
 		if (total_count == 0)
			break ;
	}
}

Squad &Squad::operator=(Squad const & src) 
{

	destroy_squad();
	squad_list *src_ptr;
	squad_list *new_link;
	unsigned int i;

	this->_count = src._count;
	i = 0;
	src_ptr = src._squad;
	while (src_ptr)
	{
		if (src_ptr->next == 0)
			break ;
		else
			src_ptr = src_ptr->next;
	}

	while (src_ptr)
	{
		new_link = new squad_list;
		new_link->data = src_ptr->data->clone();
		if (i == 0)
		{
			new_link->next = 0;
			new_link->previous = 0;
		}
		else
		{		
			new_link->next = _squad;
			new_link->previous = 0;
			_squad->previous = new_link;
		}
		_squad = new_link;
		i++;
		if (src_ptr->previous != 0)
			src_ptr = src_ptr->previous;
		else 
			break;
	}
	return *this;
}
/////////////////////////////////////////////////////////////////////////////////////////////

int Squad::getCount() const
{	
	return (int)_count;
}

ISpaceMarine* Squad::getUnit(const int nth) const
{
	unsigned int size;
	squad_list *ptr;

	size = (unsigned int)getCount() - 1;
	ptr = _squad;
	if (nth > (int)size || _count == 0)
	{
		// std::cout << "GOAT" << std::endl;	
		return NULL; 
	}
	while ((int)size > nth)
	{
		if (ptr->next)
			ptr = ptr->next;
		size--;
	}
	return ptr->data;
}

int Squad::check_if_already_in_squad(ISpaceMarine *marine)
{
	squad_list *squad_ptr;

	squad_ptr = _squad;
	if (squad_ptr != 0)
	{
		while (squad_ptr)
		{			
			if (squad_ptr->data == marine) 	
				return -1;
			if (squad_ptr->next == 0)
				break ;
			else
				squad_ptr = squad_ptr->next;
		}
	}
	return 0;	
}

int Squad::push(ISpaceMarine *new_marine)
{
	squad_list *new_link;
	if (new_marine == NULL || check_if_already_in_squad(new_marine) < 0) // check second condition
	{
		std::cout << "BAD PUSH" << std::endl;
		return -1;
	}
	new_link = new squad_list;
	new_link->data = new_marine;
	new_link->previous = 0;
	if (_squad)
		_squad->previous = new_link;
	new_link->next = _squad;	
	_squad = new_link;
	_count++;
	return _count;
}
