/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:13:07 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/03 12:06:30 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <fstream>

template< typename T >

class Array
{
	private:
		T *_arr;
		unsigned int _size;
		class OutOfBoundException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Trying to access out of bound memory");
				}
		};

	public:

		Array<T>() 
		{ 
			_size=0;
			_arr = new T [_size]; 
		}
		
		Array(unsigned int n) : _size(n)
		{ 
			_arr = new T [n];
			_size = n;
		}		
		Array( Array const &src ) : _size(src._size)
		{ 
			_arr = new T [src._size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_arr[i] = src._arr[i];
			}
		}
		Array &operator=(Array const &rhs)
		{
			if (this->_arr)	
				delete [] _arr;
			_size = rhs._size;	
			_arr = new T [_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_arr[i] = rhs._arr[i];
			}
			return *this;
		}
		unsigned int size()
		{	
			return _size;
		}
		T &operator[](unsigned int i) 
		{
			if (i >= _size || _size == 0)
				throw OutOfBoundException();
			return _arr[i];
		}
		~Array() 
		{
			delete [] _arr;
		}
};

// #include <stdexcept>

// template <typename T>
// class Array
// {
// public:
// 	Array(void);
// 	Array(unsigned int n);
// 	~Array(void);
// 	Array(Array const& other);

// 	Array<T>&		operator=(Array const& other);
// 	T &				operator[](unsigned int const& i);
// 	unsigned int	size(void) const;
// private:
// 	T				*_arr;
// 	unsigned int	_size;
// };

// template<typename T>
// Array<T>::Array(void): _arr(0), _size(0)
// {
// }

// template<typename T>
// Array<T>::Array(unsigned int n): _arr(new T[n]()), _size(n)
// {
// }

// template<typename T>
// Array<T>::Array(Array<T> const& other)
// {
// 	if (this->_arr)
// 		delete[] this->_arr;
// 	this->_arr = new T[other.size()];
// 	for (unsigned int i = 0; i < other._size; i++)
// 		this->_arr[i] = other._arr[i];
// 	_size = other._size;
// }

// template<typename T>
// Array<T>::~Array(void)
// {
// 	if (this->_arr)
// 		delete[] _arr;
// }

// template<typename T>
// Array<T>& Array<T>::operator=(Array<T> const& other)
// {
// 	if (this != &other)
// 	{
// 		if (_arr)
// 			delete[] _arr;
// 		_arr = new T[other._size];
// 		for (unsigned int i = 0; i < other.size(); i++)
// 			_arr[i] = other._arr[i];
// 		_size = other._size;
// 	}
// 	return (*this);
// }

// template<typename T>
// unsigned int Array<T>::size(void) const
// {
// 	return (_size);
// }

// template<typename T>
// T & Array<T>::operator[](unsigned int const& i)
// {
// 	if (i >= _size)
// 		throw std::exception();
// 	return (_arr[i]);
// }


#endif 