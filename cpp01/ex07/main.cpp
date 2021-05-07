/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:55:39 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/13 11:37:42 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int empty_check(std::string str)
{
	unsigned long i = -1;

	while(++i < str.length())
	{
		if (str[i] != ' ')
			return (0);
	}
	return (1);
}

int main(int argc, char *argv[])
{
	if (argc < 4|| argc > 4)
	{
		std::cout << "wrong nb of args" << std::endl;
		return 1;
	}

	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string s3 = argv[1];	
	std::string s4 = s3 + ".replace";
	std::string buffer;
	
	if ( s1.length() <= 0 || s2.length() <= 0 )	
	{
		std::cout << "empty strings" << std::endl;		
		return (1);
	}

	std::ifstream file(s3);	
	
	if (file.is_open() == false)
	{
		std::cout << "first file doesn't exist" << std::endl;
		return 1;	
	}
	
	std::ofstream replace(s4);
	size_t len = s1.length();
	while (std::getline(file, buffer))
	{
		while (true)
		{
			size_t pos = buffer.find(s1);
			if (pos != std::string::npos)
				buffer.replace(pos, len, s2);
			else
				break ;
		}
		replace << buffer << "\n";
	}
	replace.close();
	file.close();
	return (0);
}