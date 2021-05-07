/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:16:40 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 18:59:19 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <stdio.h>


int main()
{
 	{
        std::cout << "================== SUBJECT MAIN ==================" << std::endl;
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        
		ICharacter* me = new Character("me");
        
		AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        
		ICharacter* bob = new Character("bob");
        
		me->use(0, *bob);
        me->use(1, *bob);
        
		delete bob;
        delete me;
        delete src;
	}

    std::cout << std::endl;
    
	{
    	std::cout << "================== MATERIASOURCE COPY & CHARACTER COPY ==================" << std::endl;
        MateriaSource* source = new MateriaSource();

        source->learnMateria(new Ice());
        source->learnMateria(new Cure());
        
		Character* me = new Character("me");

        MateriaSource* source2 = new MateriaSource(*source);
		AMateria* tmp;
        tmp = source2->createMateria("ice");
        me->equip(tmp);
        tmp = source2->createMateria("cure");
        me->equip(tmp);
        
		Character* bob = new Character(*me);
        
		me->use(0, *bob);
        me->use(1, *bob);
        
		delete bob;
        delete me;
        delete source;
        delete source2;

	}

    std::cout << std::endl;
    
	{
    	std::cout << "================== MATERIASOURCE ASSIGNATION & CHARACTER ASSIGNATION ==================" << std::endl;
        MateriaSource* source = new MateriaSource();

        source->learnMateria(new Ice());
        source->learnMateria(new Cure());
        
		Character* me = new Character("me");

        MateriaSource source2 = *source;
		AMateria* tmp;
        tmp = source2.createMateria("ice");
        me->equip(tmp);
        tmp = source2.createMateria("cure");
        me->equip(tmp);
        
		Character bob = *me;
        
		me->use(0, bob);
        me->use(1, bob);
        
	    delete me;
        delete source;
	}

    std::cout << std::endl;

 	{
        std::cout << "================== MATERIA COPY & MATERIA ASSIGNATION & PROTECTIONS ==================" << std::endl;
        MateriaSource* source = new MateriaSource();
        Ice *ice = new Ice();
        Cure *cure = new Cure();

		Ice *icecream = new Ice(*ice);
        std::cout << "TYPE " << icecream->getType() << std::endl;
        std::cout << "XP   " << icecream->getXP() << std::endl;

		Cure curedent = *cure;
		Cure *curedent2 = curedent.clone();

		source->learnMateria(icecream);
   		source->learnMateria(curedent2);

		Character* me = new Character("me");
        
		AMateria* tmp;
        tmp = source->createMateria("ice");
        me->equip(tmp);
        std::cout << "THERE : ";        me->equip(tmp);
        tmp = source->createMateria("cure");
        me->equip(tmp);
        std::cout << "THERE AGAIN: ";        me->equip(tmp);
       
		ICharacter* bob = new Character("bob");
        
		me->use(0, *bob);
        me->use(1, *bob);
    
	    std::cout << "ICE XP" << me->getMateriaXP(0) << std::endl;
	    std::cout << "CURE XP" << me->getMateriaXP(1) << std::endl;

		me->use(0, *bob);
        me->use(1, *bob);	

	    std::cout << "ICE XP" << me->getMateriaXP(0) << std::endl;
	    std::cout << "CURE XP" << me->getMateriaXP(1) << std::endl;

		delete bob;
        delete me;
        delete source;
		delete ice;
		delete cure;
		

	}		

    std::cout << std::endl;

 	{
        std::cout << "================== UNEQUIP ==================" << std::endl;
        IMateriaSource* src = new MateriaSource();
		Ice *icey = new Ice();
		Ice *icey1 = new Ice();
		Ice *icey2 = new Ice();

		Cure *curry = new Cure();
		Cure *curry1 = new Cure();

		Character* me = new Character("me");
    
        me->equip(icey);
        me->equip(icey1);
        me->equip(icey2);
        me->equip(curry);
        me->equip(curry1);
		ICharacter* bob = new Character("bob");
        
		me->use(-1, *bob);
        me->use(0, *bob);
        me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		me->use(5, *bob);

        me->unequip(10);
        me->unequip(0);
		me->use(5, *bob);

		delete bob;
        delete me;
        delete src;
		delete icey;
		delete icey1;
		delete icey2;
		delete curry;
		delete curry1;
	}		
}