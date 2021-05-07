/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:26:06 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/14 19:22:11 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default Constructor called " << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called " << std::endl;
	return this->_fixed_point;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called " << std::endl;
	this->_fixed_point = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
  	std::cout << "Assignation operator called " << std::endl;

	this->_fixed_point = rhs.getRawBits();
	return *this;
}