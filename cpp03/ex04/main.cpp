/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:12:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 14:00:33 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

void outputInfos(FragTrap *FT)
{
	sleep(1);
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
	sleep(1);
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
	sleep(1);
	std::cout << std::endl;
	std::cout << "///////////////////////////////// NINJATRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "NinjaTrap     |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitPoint() << std::endl;
	std::cout << "Energy points |" << FT->getEnergyPoint() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

void outputInfos(SuperTrap *FT)
{
	sleep(1);
	std::cout << std::endl;
	std::cout << "///////////////////////////////// SUPERTRAP INFOS //////////////////////////////////"<< std::endl;
	std::cout << "SuperTrap     |" << FT->getName() << std::endl;
	std::cout << "Hit points    |" << FT->getHitPoint() << std::endl;
	std::cout << "Energy points |" << FT->getEnergyPoint() << std::endl;
	std::cout << "Max Hit point |" << FT->getMaxHitPoint() << std::endl;
	std::cout << "Max nrg point |" << FT->getMaxEnergyPoint() << std::endl;
	std::cout << "Level         |" << FT->getLevel() << std::endl;	
	std::cout << "melee damage  |" << FT->getMeleeAttackDamage() << std::endl;
	std::cout << "ranged damage |" << FT->getRangedAttackDamage() << std::endl;
	std::cout << "armor red     |" << FT->getArmorDamageReduction() << std::endl;
	std::cout << "////////////////////////////////////////////////////////////////////////////////////"<< std::endl;
	std::cout << std::endl;
}

int main(void) 
{
	FragTrap GeorgeBush("George W. Bush");
	ScavTrap SaddamHussein("Saddam Hussein");
	NinjaTrap Gazo("Gazo");
	SuperTrap Anpanman("Anpanman");
	SuperTrap Anpanman2(Anpanman);

	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);
	outputInfos(&Anpanman);	
	outputInfos(&Anpanman2);	
	Gazo.ninjaShoebox(GeorgeBush);
	GeorgeBush.takeDamage(30);	
	Gazo.ninjaShoebox(SaddamHussein);
	SaddamHussein.takeDamage(30);
	Anpanman.ninjaShoebox(Gazo);
	Gazo.takeDamage(30);
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);		
	outputInfos(&Anpanman);	
	GeorgeBush.rangedAttack("Anpanman");
	Anpanman.takeDamage(20);
	outputInfos(&Anpanman);	
	outputInfos(&GeorgeBush);
	SaddamHussein.meleeAttack("Anpanman");
	Anpanman.takeDamage(20);
	outputInfos(&SaddamHussein);
	outputInfos(&Anpanman);	
	SaddamHussein.challengeNewcomer("Gazo");				
	Anpanman.vaulthunter_dot_exe("Gazo");
	Gazo.takeDamage(20);
	outputInfos(&Gazo);		
	Anpanman.rangedAttack("Saddam Hussein");
	Anpanman.meleeAttack("Saddam Hussein");
	SaddamHussein.takeDamage(80);
	SuperTrap Anpanman_the_2nd("Anpanman the second");
	Anpanman_the_2nd = Anpanman;
	outputInfos(&Anpanman_the_2nd);		
	outputInfos(&Gazo);		
	outputInfos(&GeorgeBush);
	outputInfos(&SaddamHussein);
	outputInfos(&Gazo);	
	std::cout << "A heavy nuke is dropped and everyone is atomized " << std::endl;
	
	return 0;
}