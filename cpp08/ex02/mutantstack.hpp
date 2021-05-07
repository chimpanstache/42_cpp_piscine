/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:41:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/05 13:06:47 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <limits>
#include <stack>
# include <cstddef>

template<typename T>
class MutantStack : public std::stack<T>
{
	private :
		std::vector<T> _vec;
		unsigned int _number;

	public :
		MutantStack(): _number(0) {}

		MutantStack(MutantStack<T> const &src) : _number(src._number)
		{
			for (unsigned int i=0; i<_number; i++)
			{
				_vec.push_back(src._vec[i]);	
			}
			*this = src;
		}

		MutantStack &operator=(MutantStack<T> const &src) 
		{
			_vec.clear();
			_number = src._number;
			for (unsigned int i=0; i<_number; i++)
			{
				_vec.push_back(src._vec[i]);	
			}
			return *this;
		}
		
		bool empty() { return (_number == 0 ? true : false); }
		
		unsigned int size() { return _number; }
		
		T &top()
		{ 
			return _vec.back();
		}

		void push(T to_push)
		{
			_vec.push_back(to_push);
			_number++;
		}

		void pop()
		{ 
			_vec.pop_back(); 
			_number--;
		}

		bool operator==( MutantStack<T> const &rhs) { return (_vec == rhs._vec); }
		bool operator!=( MutantStack<T> const &rhs) { return (_vec != rhs._vec); }
		bool operator<( MutantStack<T> const &rhs) { return (_vec < rhs._vec); }
		bool operator>( MutantStack<T> const &rhs) { return (_vec > rhs._vec); }
		bool operator<=( MutantStack<T> const &rhs) { return (_vec <= rhs._vec); }
		bool operator>=( MutantStack<T> const &rhs) { return (_vec >= rhs._vec); }

		typedef typename std::vector<T>::iterator iterator;

		iterator begin()
		{
			return _vec.begin();	
		}
		iterator end()
		{
			return _vec.end();
		}		
		iterator rbegin()
		{
			return _vec.rbegin();	
		}
		iterator rend()
		{
			return _vec.end();
		}	

		~MutantStack() {}	
};

#endif
