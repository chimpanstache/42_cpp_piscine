/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook2.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:28:16 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/12 11:30:58 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nul.class.hpp"

int add_persons(int time, Phonebook *people)
{
	int i = 0;
	int smthg = 11;
	std::string buf;
	if (time >= 8)
	{
		std::cout << "Phonebook is full" << std::endl;
		return 0;
	}
	else
		std::cout << "Let's add somebody !" << std::endl;
	while(i < smthg)
	{
		if (i == 0)
		{
			std::cout << "Please add a first name: ";
			std::getline(std::cin, buf);
			people[time].setFirstname(buf);
		}
		if (i == 1)
		{
			std::cout << "Please add a last name: ";
			std::getline(std::cin, buf);
			people[time].setLastname(buf);
		}
		if (i == 2)
		{
			std::cout << "Please add a nickname: ";
			std::getline(std::cin, buf);
			people[time].setNickname(buf);
		}
		if (i == 3)
		{
			std::cout << "Please add a login: ";
			std::getline(std::cin, buf);
			people[time].setLogin(buf);
		}
		if (i == 4)
		{
			std::cout << "Please add a postal address: ";
			std::getline(std::cin, buf);
			people[time].setPostaladdress(buf);
		}
		if (i == 5)
		{
			std::cout << "Please add an email address: ";
			std::getline(std::cin, buf);
			people[time].setEmailaddress(buf);
		}
		if (i == 6)
		{
			std::cout << "Please add a phone number: ";
			std::getline(std::cin, buf);
			people[time].setPhonenumber(buf);
		}
		if (i == 7)
		{
			std::cout << "Please add a birthday date: ";
			std::getline(std::cin, buf);
			people[time].setBirthdaydate(buf);
		}
		if (i == 8)
		{
			std::cout << "Please add a favorite meal: ";
			std::getline(std::cin, buf);
			people[time].setFavoritemeal(buf);
		}
		if (i == 9)
		{
			std::cout << "Please add an underwear color: ";
			std::getline(std::cin, buf);
			people[time].setUnderwearcolor(buf);
		}
		if (i == 10)
		{
			std::cout << "Please add a darkest secret: ";
			std::getline(std::cin, buf);
			people[time].setDarkestsecret(buf);
		}		
		i++;
	}
	return 0;
}

int search_by_index(int time, Phonebook *people)
{
	std::string index;
	int ind;
	bool input;

	while (1)
	{
		std::cout << "type index of chosen contact (\"0\" for none): " << std::endl; 
		try
		{
			input = (!(std::cin >> ind) || ind > time || ind < 0);
			if (input)
			{
				std::cout << "Did not understand, try again" << std::endl; 
				if (!(std::cin))
				{
					std::cin.clear();
					std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				}
				continue ;
			}
			else if (ind == 0)
			{
				std::cout << "Ok, back to menu" << std::endl; 
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
				return 0;
			}
			else 
			{
				std::cout << "|" << std::setw(10) << ind;
				if (people[ind - 1].getFirstname().length() <= 10)
					std::cout << "|" << std::setw(10) << people[ind - 1].getFirstname();
				else 
					std::cout << "|" << people[ind - 1].getFirstname().substr(0,9) << ".";
				if (people[ind - 1].getLastname().length() <= 10)
					std::cout << "|" << std::setw(10) << people[ind - 1].getLastname();
				else 
					std::cout << "|" << people[ind - 1].getLastname().substr(0,9) << ".";
				if (people[ind - 1].getNickname().length() <=10)
					std::cout << "|" << std::setw(10) << people[ind - 1].getNickname();
				else 
					std::cout << "|" << people[ind - 1].getNickname().substr(0,9) << ".";
				std::cout << "|" << std::endl;					
			}			
		}
		catch (std::logic_error)
		{
			std::cout << "Did not understand, try again" << std::endl; 
			continue ;
		}			
	}
	return 0;
}

int search_output(int time, Phonebook *people)
{
	int i;
	std::cout << "|  index   |first name|last name |nickname  |" << std::endl;
	i = 0;
	while(i < time)
	{
		std::cout << "|" << std::setw(10) << i + 1;
		if (people[i].getFirstname().length() <= 10)
			std::cout << "|" << std::setw(10) << people[i].getFirstname();
		else 
			std::cout << "|" << people[i].getFirstname().substr(0,9) << ".";
		if (people[i].getLastname().length() <= 10)
			std::cout << "|" << std::setw(10) << people[i].getLastname();
		else 
			std::cout << "|" << people[i].getLastname().substr(0,9) << ".";
		if (people[i].getNickname().length() <= 10)
			std::cout << "|" << std::setw(10) << people[i].getNickname();
		else 
			std::cout << "|" << people[i].getNickname().substr(0,9) << ".";
		std::cout << "|" << std::endl;			
		i++;
	}
	search_by_index(time, people);	
	return 0;
}

int main()
{
	std::string buff;
	Phonebook people[8];  
	int time = 0;
	while (1)
	{
		std::cout << "Please make a choice between \"EXIT\", \"ADD\" and \"SEARCH\": " << std::endl;
		std::getline (std::cin, buff);
		if (buff.compare("EXIT") == 0)
		{
			std::cout << "Bye !" << std::endl;
			return 0;
		}
		else if (buff.compare("ADD") == 0) 
		{
			add_persons(time, people);		
			if (time != 8)
				time++;
			continue ;
		}	
		else if (buff.compare("SEARCH") == 0)
		{
			search_output(time, people);
			continue ;
		}
		else
		{
			std::cout << "unknown choice, please try again" << std::endl;	
			continue ;
		}
	}
}
