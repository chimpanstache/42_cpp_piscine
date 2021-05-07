/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:56:31 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/03 13:58:32 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <queue>
#include <deque>

template <typename T >
void easyfind(T & ctnr, int const b)
{
	typename T::iterator result;
	result = find(ctnr.begin(), ctnr.end(), b);
    try
	{
		if (result == ctnr.end())
			throw std::exception();
		else 	
			std::cout << "The first occurence of " << b << " is " << *(result) << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << "There is no occurence of "<< b << std::endl;
	}
}

#endif