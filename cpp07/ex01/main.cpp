/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:41:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/03 12:14:18 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void ) 
{
	std::cout << std::endl;
	std::cout << "//////////// INT ////////////" << std::endl;
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};

	iter(arr, 10, incr<int>);

	for(int i = 0; i < 10; i++)
		std::cout << arr[i] << std::endl;

	std::cout << std::endl;
	std::cout << "//////////// FLOAT ////////////" << std::endl;
	float arr_f[10] = {0.5f,1.5f,2.5f,3.5f,4.5f,5.5f,6.5f,7.5f,8.5f,9.5f};

	iter(arr_f, 10, incr<float>);

	for(int i = 0; i < 10; i++)
		std::cout << arr_f[i] << std::endl;	

	std::cout << std::endl;
	std::cout << "//////////// DOUBLE ////////////" << std::endl;
	double arr_d[10] = {0.5,1.5,2.5,3.5,4.5,5.5,6.5,7.5,8.5,9.5};

	iter(arr_d, 10, incr<double>);

	for(int i = 0; i < 10; i++)
		std::cout << arr_d[i] << std::endl;	

	std::cout << std::endl;
	std::cout << "//////////// STRING ////////////" << std::endl;
	std::string arr_s[5] = {"bonjour"," madame",", quelle"," belle"," journée!"};

	iter(arr_s, 5, groot<std::string>);

	for(int i = 0; i < 5; i++)
		std::cout << arr_s[i] << std::endl;	

	return 0;
}