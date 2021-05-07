/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 11:55:43 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/05 16:15:44 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <unistd.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <list>
#include <array>
#include <limits>

class Span
{
	private:
		Span();
		int _N;
		std::vector<int> _vec;
		int _size;		

	public:
		Span(unsigned int N);
		Span(Span  &src);
		Span &operator=(Span &rhs);
		~Span();
		std::vector<int> &getVector();
		int getSize() const;
		int getN() const;
		void addNumber(int num);
		void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan();
		int longestSpan();
};

#endif