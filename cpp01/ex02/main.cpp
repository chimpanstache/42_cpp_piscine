/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 18:26:21 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 12:59:38 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string randomName(int length) {

  char consonents[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z'};
  char vowels[] = {'a','e','i','o','u','y'};
  srand(time(NULL));
  std::string name = "";

  int random = rand() % 2;
  int count = 0;

  for(int i = 0; i < length; i++) {

    if(random < 2 && count < 2) {
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

void randomChump()
{
	Zombie randy(randomName(10), "Chumpy");
	randy.advert();
}

int main()
{
	Zombie Zidane("Zinedine", "Coach");
	Zidane.advert();

	Zombie *Bale = new Zombie("Gareth", "Winger");
	Bale->advert();
	delete Bale;

	randomChump();

	ZombieEvent zmb;
	zmb.setZombieType("Striker");
	Zombie *Benzema  = zmb.newZombie("Karim");
	Benzema->advert();
	delete Benzema;
	return (0);
}