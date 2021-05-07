/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:26:02 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 17:59:41 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <unistd.h>
#include <cmath>


class Fixed
{
	private:
		int _fixed_point_val;
		const static int _bits = 8;

	public:
		Fixed();
		Fixed( Fixed const & src );
		Fixed( const int src );		
		Fixed( const float src );	
		~Fixed();
		Fixed & operator=(Fixed const & rhs);
		int getRawBits(void) const; 
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const; 
};

std::ostream &operator<<( std::ostream & o, Fixed const & rhs);


#endif