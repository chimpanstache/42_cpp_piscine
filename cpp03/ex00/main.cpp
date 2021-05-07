/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:12:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/21 18:34:55 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

void outputInfos(FragTrap *FT)
{
	std::cout << std::endl;
	std::cout << "////////////////////////////// INFOS /////////////////////////////// " << std::endl;	
	std::cout << "FragTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitpoints() << std::endl;
	std::cout << "Energy points |" << FT->getEnergypoints() << std::endl;
	std::cout << "//////////////////////////////////////////////////////////////////// " << std::endl;	
	std::cout << std::endl;
}

int main(void) 
{
	FragTrap GeorgeBush("George W. Bush");
	outputInfos(&GeorgeBush);
	GeorgeBush.rangedAttack("Saddam Hussein");
	GeorgeBush.meleeAttack("Saddam Hussein");	
	outputInfos(&GeorgeBush);	
	GeorgeBush.takeDamage(85);
	outputInfos(&GeorgeBush);			
	GeorgeBush.vaulthunter_dot_exe("Saddam Hussein");
	outputInfos(&GeorgeBush);	
	GeorgeBush.vaulthunter_dot_exe("Saddam Hussein");
	outputInfos(&GeorgeBush);
	GeorgeBush.vaulthunter_dot_exe("Saddam Hussein");
	outputInfos(&GeorgeBush);
	GeorgeBush.vaulthunter_dot_exe("Saddam Hussein");
	FragTrap GeorgeBushFather(GeorgeBush);
	outputInfos(&GeorgeBushFather);
	GeorgeBush.beRepaired(75);		
	outputInfos(&GeorgeBush);
	GeorgeBush.vaulthunter_dot_exe("Saddam Hussein");
	outputInfos(&GeorgeBush);
	GeorgeBush.takeDamage(90);		
	outputInfos(&GeorgeBush);
	GeorgeBush.takeDamage(20);
	outputInfos(&GeorgeBush);			
	return 0;
}