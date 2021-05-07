/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:37:28 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 09:53:34 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};
  srand(time(NULL));
  std::string name = "";

  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if (random < 2 && count < 2) {
      name = name + consonents[rand() % 19];
      count++;
    }
    else {
      name = name + vowels[rand() % 5];
      count = 0;
    }

    random = rand() % 2;

  }
  return name;

}

void ZombieHorde::set_hordeSize(unsigned int size)
{
	this->_hordeSize = size;
	return ;	
}

ZombieHorde::ZombieHorde(unsigned int n)
{
	horde = new Zombie[n];
	set_hordeSize(n);
	for (int i = 0; i < (int)n; ++i) 
	{
		usleep(1000000);
		horde[i].setType("horde");		
		horde[i].setName(randomName(6));
	}
}


ZombieHorde::~ZombieHorde()
{
	delete [] this->horde;
		std::cout << "KILLING HORDE" << std::endl;	
}

void ZombieHorde::announce()
{
	for (int i = 0; i < (int)_hordeSize; ++i) 
		horde[i].advert();
}