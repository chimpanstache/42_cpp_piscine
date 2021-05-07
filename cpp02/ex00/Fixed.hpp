/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:26:02 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 15:48:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <unistd.h>


class Fixed
{
	private:
		int _fixed_point;
		const static int _bits = 8;

	public:
		Fixed();
		Fixed( Fixed const & src );
		Fixed & operator=(Fixed const & rhs);
		~Fixed();
		int getRawBits(void) const; 
		void setRawBits(int const raw);
};




#endif