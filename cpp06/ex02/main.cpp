/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 18:34:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/30 16:56:12 by ehafidi          ###   ########.fr       */
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

class Base 
{
	public:
		virtual ~Base() {}
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

Base *generate(void)
{
 	Base *b;
	sleep(1);
	 srand(time(NULL));
	int i = rand() % 3 + 1;
	std::cout << "rand i : " << i << std::endl;	 
	if (i == 1)
		b = new A();
	else if (i == 2)
		b = new B();	
	else 
		b = new C();
	(void)b;
	return b;			
}

void identify_from_pointer(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;

}

void identify_from_reference( Base & p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast){}
	try
	{
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
	}
	catch(std::bad_cast){}
	try
	{
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
	}
	catch(std::bad_cast){}
}

int main()
{	
	Base *p = generate();
	std::cout << "from pointer: "; identify_from_pointer(p);
	std::cout << "from reference: "; identify_from_reference(*p);
	delete p;
	return 0;
}