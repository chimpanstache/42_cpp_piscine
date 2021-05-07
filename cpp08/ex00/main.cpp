/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 10:36:28 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/05 13:49:01 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	std::list<int> l;
	std::deque<int> d;

	std::cout << std::endl;
	std::cout << "        ~~~EASYFIND ON EMPTY DEQUE~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::deque<int> >(d, i);	

	std::cout << std::endl;
	std::cout << "        ~~~EASYFIND ON EMPTY LIST~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::list<int> >(l, i);	

	std::cout << std::endl;
	std::cout << "        ~~~EASYFIND ON EMPTY VECTOR~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::vector<int> >(v, i);	

	for (int i = -2 ; i <=2 ; i++)
		v.push_back(i);
	for (int i = -2 ; i <=2 ; i++)
		v.push_back(i);
	for (int i = -2 ; i <=2 ; i++)
		l.push_back(i);
	for (int i = -2 ; i <=2 ; i++)
		l.push_back(i);
	for (int i = -2 ; i <=2 ; i++)
		d.push_back(i);
	for (int i = -2 ; i <=2 ; i++)
		d.push_back(i);

	std::cout << std::endl;
	std::cout << "        ~~~VECTOR ITERATION~~~         " << std::endl;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end() ; it++)
		std::cout << *it << std::endl;

	std::cout << std::endl;
	std::cout << "        ~~~LIST ITERATION~~~         " << std::endl;
	for (std::list<int>::iterator it = l.begin() ; it != l.end() ; it++)
		std::cout << *it << std::endl;

	std::cout << std::endl;
	std::cout << "        ~~~DEQUE ITERATION~~~         " << std::endl;
	for (std::deque<int>::iterator it = d.begin() ; it != d.end() ; it++)
		std::cout << *it << std::endl;

	std::cout << std::endl;
	std::cout << "        ~~~VECTOR EASYFIND~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::vector<int> >(v, i);	

	std::cout << std::endl;
	std::cout << "        ~~~LIST EASYFIND~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::list<int> >(l, i);	

	std::cout << std::endl;
	std::cout << "        ~~~DEQUE EASYFIND~~~         " << std::endl;
	for (int i = -3 ; i <=3 ; i++)
		easyfind<std::deque<int> >(d, i);	


	return 0;
}