/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:14:30 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/30 15:56:37 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <ctype.h>
#include <limits>
#include <stdlib.h>
#include <unistd.h>

struct Data 
{ 
	std::string s1; 
	int n; 
	std::string s2; 
};

void rand_string(char *str)
{
	size_t size = 8;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  	sleep(1);
	srand(time(NULL)); 
    if (size) {
        --size;
        for (size_t n = 0; n < size + 1; n++) {
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        };
    }
}

void *serialize(void)
{
	char	*str = new char[20];

	rand_string(str);
	*(reinterpret_cast<int *>(&str[8])) = rand();
	rand_string(&(str[12]));	
	
	return (str); 	
}

Data * deserialize(void *raw)
{
	Data *dada = new Data;
	char *c = reinterpret_cast<char *>(raw);
	
	dada->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	dada->n = *(reinterpret_cast<int *>(&c[8]));
	dada->s2 = std::string(&c[12], 8);
	return dada;
}

int main()
{
	Data *dodo;
	void *arr = serialize();

	dodo = deserialize(arr);
	std::cout << "s1 : " << dodo->s1 << std::endl;
	std::cout << "n  : " << dodo->n << std::endl;
	std::cout << "s2 : "<< dodo->s2 << std::endl;
	delete (char*)arr;
	delete dodo;
} 



