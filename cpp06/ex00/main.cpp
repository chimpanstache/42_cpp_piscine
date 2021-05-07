/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 15:31:22 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/30 16:45:45 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <ctype.h>
#include <limits>
#include <stdlib.h>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <climits>
#include <cmath>

int check_value(char *str)
{
	if (strcmp(str, "-inf") == 0 || strcmp(str, "+inf") == 0 || strcmp(str, "nan") == 0 || strcmp(str, "-inff") == 0 || strcmp(str, "+inff") == 0 || strcmp(str, "nanf") == 0 || strcmp(str, "inf") == 0 || strcmp(str, "inff") == 0)
	{
		return 0;
	}
	if (strlen(str) == 1 && isdigit(*str) == 0)
	{
		std::cout << "Litteral \'" << str << "\' is not valid " << std::endl;
		return -1;
	}
	for (size_t i = 0; i < strlen(str) ; i++)
	{
		if (str[i] == 'f' && i != (strlen(str) - 1))
		{
			std::cout << "Litteral \'" << str << "\' is not valid " << std::endl;
			return -1;
		}
	}
	int yy = 0;
	for (size_t i = 0; i < strlen(str) ; i++)
	{
		if (isdigit(str[i]) == 0 && str[i] != '-' && str[i] != '+' && str[i] != '.' && str[i] != 'f')
		{
			std::cout << "Litteral \'" << str << "\' is not valid " << std::endl;
			return -1;
		}
		if (str[i] == '-' || str[i] == '+') 
			yy++;
		if (yy > 1)
		{
			std::cout << "Litteral \'" << str << "\' is not valid " << std::endl;
			return -1;
		}
		if ((str[i] == '-' || str[i] == '+')  && i != 0)
		{
			std::cout << "Litteral \'" << str << "\' is not valid " << std::endl;
			return -1;
		}

	}	

	return 0;
}

int main(int argc, char **argv)
{
    long int integer;
    float floaty;
    if (argc != 2)
    {
        std::cout << " too many/less arguments " << std::endl;
        return -1;
    }
    unsigned long i = -1;
    while (++i < strlen(argv[1]))
    {
        if (isprint(argv[1][i]) == false)
        {    
            std::cout << " non printable characters " << std::endl;
            return -1;
        }
    }

	if (check_value(argv[1]) != 0)
		return -1;
	integer = strtol(argv[1], NULL, 10);
	if (strncmp(argv[1], "-inf", 4) == 0 || strncmp(argv[1], "+inf", 4) == 0 || strncmp(argv[1], "nan", 4) == 0 )
		std::cout << "char: impossible "<< std::endl;	
	else if (integer < 32 || integer > 126)
		std::cout << "char: Non displayable "<< std::endl;	
	else 
		std::cout << "char: \'" << static_cast<char>(integer) << "\'" << std::endl;	
	floaty = atof(argv[1]);
	if (floaty > INT_MAX || floaty < INT_MIN || strncmp(argv[1], "-inf", 4) == 0 || strncmp(argv[1], "+inf", 4) == 0 || strncmp(argv[1], "nan", 4) == 0 )
		std::cout << "int : impossible " << std::endl;
	else 
		std::cout << "int: " << static_cast<int>(floaty) << std::endl;	
	std::cout << "float: " << floaty << (integer == floaty ? ".0f" : "f") << std::endl;	
	std::cout << "double: " << static_cast<double>(floaty) << (integer == floaty ? ".0" : "") << std::endl;					
	
    return 0;
}
