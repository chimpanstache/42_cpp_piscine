/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:12:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/21 19:25:54 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void outputInfos(FragTrap *FT)
{
	std::cout << std::endl;
	std::cout << "///////////////////////////////// FRAGTRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "FragTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitpoints() << std::endl;
	std::cout << "Energy points |" << FT->getEnergypoints() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

void outputInfos(ScavTrap *FT)
{
	std::cout << std::endl;
	std::cout << "///////////////////////////////// SCAVTRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "ScavTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitpoints() << std::endl;
	std::cout << "Energy points |" << FT->getEnergypoints() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

int main(void) 
{
	FragTrap GeorgeBush("George W. Bush");
	ScavTrap SaddamHussein("Saddam Hussein");
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	GeorgeBush.rangedAttack("Saddam Hussein");
	SaddamHussein.takeDamage(20);
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);	
	GeorgeBush.meleeAttack("Saddam Hussein");
	SaddamHussein.takeDamage(30);
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	std::cout << "Saddam Hussein goes to McKhaled's to eat a Camel burger and take some forces" << std::endl;
	SaddamHussein.beRepaired(30);
	outputInfos(&SaddamHussein);					
	SaddamHussein.challengeNewcomer("George W. Bush");				
	SaddamHussein.challengeNewcomer("George W. Bush");
	SaddamHussein.challengeNewcomer("George W. Bush");
	SaddamHussein.challengeNewcomer("George W. Bush");
	SaddamHussein.challengeNewcomer("George W. Bush");			
	SaddamHussein.meleeAttack("George W. Bush");
	SaddamHussein.meleeAttack("George W. Bush");
	SaddamHussein.meleeAttack("George W. Bush");
	SaddamHussein.meleeAttack("George W. Bush");
	SaddamHussein.meleeAttack("George W. Bush");				
	SaddamHussein.rangedAttack("George W. Bush");
	SaddamHussein.rangedAttack("George W. Bush");
	GeorgeBush.takeDamage(110);
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);	
	ScavTrap SaddamHusseinJR(SaddamHussein);					
	outputInfos(&SaddamHusseinJR);	
	return 0;
}