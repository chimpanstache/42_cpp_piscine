/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:08:26 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 12:24:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>
#include <string>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	*(panthere) = "String panthere 1";
	std::cout << *panthere << std::endl;
	delete panthere;
	std::string panthere2 = std::string("String panthere 2");
	std::cout << panthere2 << std::endl;
}

int main()
{
	memoryLeak();
	return (0);
}