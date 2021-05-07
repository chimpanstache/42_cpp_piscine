/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:24:29 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/07 18:39:51 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *point_brain = &brain;
	std::string &ref_brain = brain;

	std::cout << *point_brain << std::endl;
	std::cout << ref_brain << std::endl;
	return 0;
}