/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 12:55:23 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/05 16:48:41 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	std::cout << "SUBJECT MAIN " << std::endl;
	{
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << "/////////// MEMBER FUNCTIONS TEST ////////////" << std::endl;
	{
		Span sp(5);

		std::cout << std::endl;
		std::cout << "        ~~~~TEST EMPTY SPAN~~~~~~~" << std::endl;
			
		try
		{
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "class is too small " << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;	
		}
		catch(const std::exception& e)
		{
			std::cerr << "class is too small " << std::endl;
		}		
		sp.addNumber(5);
		std::cout << "        ~~~~TEST SPAN WITH 1 NUMBER ONLY~~~~~~~" << std::endl;
		try
		{	
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "class is too small " << std::endl;
		}
		try
		{
			std::cout << sp.longestSpan() << std::endl;	
		}
		catch(const std::exception& e)
		{
			std::cerr << "class is too small " << std::endl;
		}
		std::cout << "        ~~~~TEST ADD NUMBERS EXCEPTION~~~~~~~" << std::endl;
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "SHOULD THROW EXCEPTION NOW " << std::endl;		
		sp.addNumber(11);
		std::cout << "SP SHORTEST SPAN : " << sp.shortestSpan() << std::endl;
		std::cout << "SP LONGEST SPAN : "<< sp.longestSpan() << std::endl;
		std::cout << "        ~~~~COPY~~~~~~~" << std::endl;	
		Span sp2(sp);
		std::cout << "SP2 COPY SHORTEST SPAN : " << sp2.shortestSpan() << std::endl;
		std::cout << "SP2 COPY LONGEST SPAN : " << sp2.longestSpan() << std::endl;
	}	
	std::cout << "/////////// ASSIGNATION ////////////" << std::endl;
	{
		Span sp(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "SP SHORTEST SPAN : " << sp.shortestSpan() << std::endl;
		std::cout << "SP LONGEST SPAN : "<< sp.longestSpan() << std::endl;

		Span sp2(5);
	
		sp2.addNumber(1);
		sp2.addNumber(10);
		sp2.addNumber(100);
		sp2.addNumber(1000);
		sp2.addNumber(-10);
			std::cout << std::endl;
		std::cout << "        ~~~~SP2 BEFORE ASSIGNATION~~~~~~~" << std::endl;	
		std::cout << "SP2 SHORTEST SPAN : " << sp2.shortestSpan() << std::endl;
		std::cout << "SP2 LONGEST SPAN : " << sp2.longestSpan() << std::endl;
		
		std::cout << std::endl;
		std::cout << "        ~~~~SP2 AFTER ASSIGNATION~~~~~~~" << std::endl;
		sp2 = sp;
		std::cout << "SP2 ASSIGNED SHORTEST SPAN : " << sp2.shortestSpan() << std::endl;
		std::cout << "SP2 ASSIGNED LONGEST SPAN : " << sp2.longestSpan() << std::endl;
	}		

	std::cout << "/////////// ADDNUMBER ITERATORS 20000 ////////////" << std::endl;
	{
		sleep(1);
		Span sp3(20000);
		for (int i = -10000; i < 10000 ; i++)	
			sp3.addNumber(i);

		std::cout << " SIZE SP3 : " << sp3.getSize() << std::endl;	
		sleep(1);			
		for (int i = 0; i < 20000 ; i++)	
		{
			std::cout << "*SP3 : " << sp3.getVector()[i] << std::endl;
			usleep(500);
		}

		sleep(1);
		std::cout << "        ~~~~TEST ADD NUMBERS WITH ITERATORS~~~~~~~" << std::endl;
		sleep(1);
		Span sp4(20000);
		std::vector<int>::iterator begin = sp3.getVector().begin();
		std::vector<int>::iterator end = sp3.getVector().end();
		sp4.addNumber(begin, end);
		for (int i = 0; i < 20000 ; i++)	
		{
			std::cout<< "*SP4 : " << sp4.getVector()[i] << std::endl;
			usleep(500);
		}
		std::cout << " SIZE SP4 : " << sp4.getSize() << std::endl;	
		std::cout << "SP4 SHORTEST SPAN : " << sp4.shortestSpan() << std::endl;
		std::cout << "SP4 LONGEST SPAN : " << sp4.longestSpan() << std::endl;	
		std::cout << "        ~~~~TEST ADD NUMBERS WITH ITERATORS EXCEPTIONS~~~~~~~" << std::endl;

		Span sp5(15000);
		sp5.addNumber(begin, end);
	}		
	return 0;
}