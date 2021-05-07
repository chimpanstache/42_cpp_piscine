/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:26:06 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/14 19:26:17 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed() : _fixed_point_val(0)
{
	std::cout << "Default Constructor called " << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int src )
{
	std::cout << "const int constructor" << std::endl;
	this->_fixed_point_val = (src << this->_bits);
	return ;
}

Fixed::Fixed(const float src )
{
	std::cout << "const float constructor" << std::endl;
	this->_fixed_point_val = roundf(src * (1 << this->_bits));
	return ;
}

int Fixed::getRawBits( void ) const
{
	return this->_fixed_point_val;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called " << std::endl;
	this->_fixed_point_val = raw;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
  	std::cout << "Assignation operator called from " << this->_fixed_point_val <<  std::endl;

	this->_fixed_point_val = rhs.getRawBits();
	return *this;
}

int Fixed::toInt(void) const 
{
	return((int)roundf(_fixed_point_val >> _bits)) ;
}

float Fixed::toFloat(void) const
{
	return ((float)_fixed_point_val / (float)(1 << _bits));	
}

std::ostream &operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}