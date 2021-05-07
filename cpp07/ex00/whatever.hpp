/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:41:32 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/03 12:11:28 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template< typename T >
void swap( T & a, T & b)
{
	T buf;

	buf = a;
	a = b;
	b = buf;
}

template< typename T >
T const &min( T const &a, T const &b)
{
	if (a == b)
		return b;
	return (a < b ? a : b);	
}

template< typename T >
T const &max( T const &a, T const &b)
{
	if (a == b)
		return b;
	return (a > b ? a : b);	
}