/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:57:27 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 11:51:20 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Zaz.hpp"

int main()
{
	std::cout << "//////////////SUBJECT MAIN///////////////" << std::endl;
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << std::endl;
	std::cout << "//////////////SORCERER'S MAIN///////////////" << std::endl;
	{
		Sorcerer Harry("Harry", "The binoclard");
		Sorcerer HarryJr(Harry);
		Sorcerer Ron("Ron", "Redhead");
		Zaz zazou("Zaz");

		std::cout << Harry << std::endl;
		std::cout << HarryJr << std::endl;
		std::cout << Ron << std::endl;
		std::cout << zazou << std::endl;
		Ron = Harry;
		std::cout << Ron << std::endl;
		Harry.polymorph(zazou);
	}
	std::cout << std::endl;
	std::cout << "//////////////VICTIM'S MAIN///////////////" << std::endl;
	{
		Victim Dobby("Dobby");
		Victim Elf(Dobby);
		Victim Elf2("Elf2");	
		Sorcerer Harry("Harry", "The binoclard");

		std::cout << Dobby << std::endl;
		std::cout << Elf << std::endl;
		std::cout << Elf2 << std::endl;
		std::cout << Harry << std::endl;
		Elf2 = Elf;
		std::cout << Elf2 << std::endl;
		Harry.polymorph(Dobby);
	}
	std::cout << std::endl;
	std::cout << "//////////////PEON'S MAIN///////////////" << std::endl;
	{
		Peon Pepe("Pepe");
		Peon Nono(Pepe);
		Peon Pepito("Pepito");	
		Sorcerer Harry("Harry", "The binoclard");

		std::cout << Pepe << std::endl;
		std::cout << Nono << std::endl;
		std::cout << Pepito << std::endl;
		std::cout << Harry << std::endl;
		Pepito = Pepe;
		std::cout << Pepito << std::endl;
		Harry.polymorph(Pepito);
	}

	return 0;
}