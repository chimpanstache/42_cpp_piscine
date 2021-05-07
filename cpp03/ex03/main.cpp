/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:12:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/22 12:06:17 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void outputInfos(FragTrap *FT)
{
	std::cout << std::endl;
	std::cout << "///////////////////////////////// FRAGTRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "FragTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitPoint() << std::endl;
	std::cout << "Energy points |" << FT->getEnergyPoint() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

void outputInfos(ScavTrap *FT)
{
	std::cout << std::endl;
	std::cout << "///////////////////////////////// SCAVTRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "ScavTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitPoint() << std::endl;
	std::cout << "Energy points |" << FT->getEnergyPoint() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

void outputInfos(NinjaTrap *FT)
{
	std::cout << std::endl;
	std::cout << "///////////////////////////////// NINJATRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "NinjaTrapTrap      |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitPoint() << std::endl;
	std::cout << "Energy points |" << FT->getEnergyPoint() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

int main(void) 
{
	FragTrap GeorgeBush("George W. Bush");
	ScavTrap SaddamHussein("Saddam Hussein");
	NinjaTrap Gazo("Gazo");
	NinjaTrap FreezeCorleone("Chenzen");

	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);
	outputInfos(&FreezeCorleone);
	Gazo.ninjaShoebox(GeorgeBush);
	GeorgeBush.takeDamage(30);	
	Gazo.ninjaShoebox(SaddamHussein);
	SaddamHussein.takeDamage(20);
	FreezeCorleone.ninjaShoebox(Gazo);
	Gazo.takeDamage(20);
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);		
	outputInfos(&FreezeCorleone);		
	GeorgeBush.rangedAttack("Chenzen");
	FreezeCorleone.takeDamage(20);
	outputInfos(&GeorgeBush);
	outputInfos(&FreezeCorleone);
	SaddamHussein.meleeAttack("Chenzen");
	FreezeCorleone.takeDamage(20);
	outputInfos(&SaddamHussein);
	outputInfos(&FreezeCorleone);	
	SaddamHussein.challengeNewcomer("Gazo");				
	GeorgeBush.vaulthunter_dot_exe("Gazo");
	Gazo.takeDamage(20);
	SaddamHussein.meleeAttack("Gazo");
	Gazo.takeDamage(20);			
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);	
	outputInfos(&FreezeCorleone);		
	NinjaTrap ZuukouMayzie(FreezeCorleone);
	outputInfos(&ZuukouMayzie);		
	std::cout << "A heavy nuke is dropped and everyone is atomized " << std::endl;
	return 0;
}