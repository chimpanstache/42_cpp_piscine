/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 13:13:07 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/02 19:17:06 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <fstream>

template< typename T >
void incr( T & a)
{
	a++;
	return ;
}

template< typename TTT >
void groot( TTT & a)
{
	a = "Je s'appelle groot!";
	return ;
}

template<typename TT> 
void iter( TT *arr, size_t  b, void (*f)(TT const &x))
{
	int i;

	i = -1;
	while (++i < (int)b)
	{
		f(arr[i]);
	}
	return ;
}

template<typename TT> 
void iter( TT *arr, size_t  b, void (*f)(TT &x))
{
	int i;

	i = -1;
	while (++i < (int)b)
	{
		f(arr[i]);
	}
	return ;
}

template<typename TT> 
void iter( TT *arr, size_t  b, void (*f)(TT x))
{
	int i;

	i = -1;
	while (++i < (int)b)
	{
		f(arr[i]);
	}
	return ;
}

#endif