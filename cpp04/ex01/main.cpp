/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 17:07:44 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 19:29:53 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aweapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	std::cout << "////////////// SUBJECT'S MAIN /////////////////" << std::endl;
	{
		Character* me = new Character("me");
		std::cout << *me;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		delete me;
        delete pr;
        delete pf;
	}
	std::cout << std::endl;
	std::cout << "////////////// MY PERSONAL TESTS /////////////////" << std::endl;
	{
		Character* me = new Character("me");
		Character* EnglishMe = new Character(*me);
		std::cout << *me << std::endl;
		std::cout << *EnglishMe << std::endl;
		PowerFoot* CarlosTevez = new PowerFoot();		
		PowerFoot* RobertoCarlos = new PowerFoot(*CarlosTevez);		
		SuperLutin *ViciousLutin = new SuperLutin();
		SuperLutin *EnglishLutin = new SuperLutin(*ViciousLutin);
		std::cout << "~~~#1#~~~ : basic stuffs" << std::endl;
		me->equip(CarlosTevez);
		std::cout << *me << std::endl;
		EnglishMe->equip(RobertoCarlos);
		std::cout << *EnglishMe << std::endl;;
		me->attack(ViciousLutin);
		std::cout << *me << std::endl;;
		EnglishMe->attack(EnglishLutin);
		std::cout << *EnglishMe;
		std::cout << "~~~#2#~~~" << std::endl;
		me->equip(RobertoCarlos);
		EnglishMe->equip(CarlosTevez);
		std::cout << *EnglishMe << std::endl;;
		std::cout << *me << std::endl;;
		me->attack(EnglishLutin);
		std::cout << "~~~#3#~~~ : try to get 0 AP" << std::endl;
		for (int i = 0 ; i < 6 ; i++)
			EnglishMe->attack(ViciousLutin); 
		for (int i = 0 ; i < 6 ; i++)
			EnglishMe->recoverAP();
		for (int i = 0 ; i < 3 ; i++)
			EnglishMe->attack(ViciousLutin); 
		std::cout << "~~~#4#~~~ : Test assignations" << std::endl;
		std::cout << " EnglishLutin hp : " << EnglishLutin->getHP() << std::endl;
		SuperLutin AssignLutin = *EnglishLutin;
		std::cout << " AssignLutin hp : " << AssignLutin.getHP() << std::endl;
		std::cout << "~~~#5#~~~" << std::endl;
		std::cout << " me : " << *me << std::endl;
		Character AssignMe = *me;
		std::cout << " AssignMe : " << AssignMe << std::endl;
		std::cout << "~~~#6#~~~" << std::endl;
		RobertoCarlos->attack();
		PowerFoot RonaldoleGros = *RobertoCarlos;
		RonaldoleGros.attack();

		delete me;
        delete EnglishMe;
        delete RobertoCarlos;
        delete CarlosTevez;
        // delete ViciousLutin;
        delete EnglishLutin;
	}	
	return 0;
}
