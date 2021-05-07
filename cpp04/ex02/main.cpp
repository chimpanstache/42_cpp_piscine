/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 13:46:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 20:39:19 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include <stdio.h>

int main()
{
	std::cout << "////////////////// SUBJECT'S MAIN ///////////////////" << std::endl; 
	{	
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;

		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << std::endl; 
	std::cout << "///////////////// TEST PUSH, GET UNIT PROTECTION ///////////////////" << std::endl; 
	{	
		TacticalMarine* bob = new TacticalMarine;
		AssaultTerminator* jim = new AssaultTerminator;

		Squad* vlc = new Squad;

		std::cout <<  "GET UNIT PROTEC : " << vlc->getUnit(5) << std::endl;		
		vlc->push(bob);
		vlc->push(bob);
		vlc->push(NULL);
		vlc->push(jim);
		std::cout <<  "GET UNIT PROTEC : " << vlc->getUnit(5) << std::endl;		
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();			
		}	
		delete vlc;
	}
	std::cout << std::endl; 
	std::cout << "////////////////// TEST COPY CONSTRUCTOR & CLONE FOR MARINES ///////////////////" << std::endl; 
	{	
		TacticalMarine* bob = new TacticalMarine;
		TacticalMarine* bobby = new TacticalMarine(*bob);
		ISpaceMarine* bobbybobby = bobby->clone();
		AssaultTerminator* jim = new AssaultTerminator;
		AssaultTerminator* jimmy = new AssaultTerminator(*jim);
		ISpaceMarine* jimmyjimmy = jimmy->clone();
		
		Squad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(bobby);
		vlc->push(bobbybobby);
		vlc->push(jim);
		vlc->push(jimmy);
		vlc->push(jimmyjimmy);
		
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			std::cout << vlc->getCount() << std::endl;
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
		}	

		delete vlc;
	}
	std::cout << std::endl; 
	std::cout << "////////////////// TEST COPY CONSTRUCTOR & ASSIGN OPERATOR FOR SQUAD///////////////////" << std::endl; 
	{	
		TacticalMarine* bob = new TacticalMarine;
		AssaultTerminator* jim = new AssaultTerminator;
		TacticalMarine* bobby = new TacticalMarine(*bob);
		AssaultTerminator* jimmy = new AssaultTerminator(*jim);
		
		Squad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bobby);
		vlc->push(jimmy);
		
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
		}	

		std::cout << std::endl; 
		std::cout << "/// COPY CONSTRUCTOR ///" << std::endl; 
		Squad* clv = new Squad(*vlc);
		 
		for (int i = 0; i < clv->getCount(); ++i)
		{
			ISpaceMarine* cur = clv->getUnit(i);
			cur->battleCry();
		}

		std::cout << std::endl; 
		std::cout << "/// ASSIGN OPERATOR ///" << std::endl; 
		
		Squad clv2 = *vlc;
		 
		for (int i = 0; i < clv2.getCount(); ++i)
		{
			ISpaceMarine* cur = clv2.getUnit(i);
			cur->battleCry();
		}	

		std::cout << std::endl; 
		std::cout << "REPERE" << std::endl; 
		clv2 = *clv;

		for (int i = 0; i < clv2.getCount(); ++i)
		{
			ISpaceMarine* cur = clv2.getUnit(i);
			cur->battleCry();
		}	

		delete vlc;
		delete clv;
	}		

	return 0;
}