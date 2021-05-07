/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:21:39 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/05 16:47:57 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"


Span::Span(unsigned int N) : _N(N), _size(0) {}

Span::Span(Span &src) : _N(src.getN()), _size(src.getSize())
{
	for (int i=0; i<src.getSize(); i++)
	{
        _vec.push_back(src.getVector()[i]);	
	}
}

Span &Span::operator=(Span &src)
{
	this->_N = src.getN(); 
	this->_size = src.getSize();

	_vec.clear();
	for (int i=0; i<src.getSize(); i++)
	{	
        _vec.push_back(src.getVector()[i]);	
	}
	return *this;
}

std::vector<int> &Span::getVector()
{
	return _vec;
}

int Span::getSize() const
{
	return _size;
}

int Span::getN() const
{
	return _N;
}

Span::~Span() 
{
	_vec.clear();
}

void Span::addNumber(int num)
{ 
	try
	{
		if (_N == 0)
			throw std::exception();
		else
		{
			_vec.push_back(num);
			_N--;
			_size++;
		}		
	}
	catch(const std::exception& e)
	{
		std::cerr << "class is full, cannot add numbers " << std::endl;
	}
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	// std::cout << "distance: " << distance(begin, end) << std::endl;		
	try
	{
		if (distance(begin, end) > _N)
		{
			throw std::exception();
		}
		else	
		{
			_vec.insert(_vec.begin(), begin, end);
			_size = distance(begin, end);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "range too large " << std::endl;
	}
}

int Span::shortestSpan() 
{
	if (_size == 0 || _size == 1)
	{
		throw std::exception();
	}
	int spanish;
	int shortest_span;

	spanish = 0;
	for (int i = 0 ; i < (int)_vec.size(); i++)
	{
		for (int j = 0 ; j < (int)_vec.size(); j++)
		{
			if (i != j)
			{
				spanish = _vec[j] - _vec[i];
				if (spanish < 0)
					spanish *= -1;
				if (i == 0 && j == 1)
					shortest_span = spanish;	
				else if(spanish < shortest_span)
					shortest_span = spanish;	
			}
		}			
	}
	return shortest_span;
}

int Span::longestSpan() 
{
	if (_size == 0 || _size == 1)
	{
		throw std::exception();
	}
	int spanish;
	int longest_span;

	spanish = 0;
	for (int i = 0 ; i < (int)_vec.size(); i++)
	{
		for (int j = 0 ; j < (int)_vec.size(); j++)
		{
			if (i != j)
			{
				spanish = _vec[j] - _vec[i];
				if (spanish < 0)
					spanish *= -1;
				if (i == 0 && j == 1)
					longest_span = spanish;	
				else if(spanish > longest_span)
					longest_span = spanish;	
			}
		}			
	}
	return longest_span;	
}