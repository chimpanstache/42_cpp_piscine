/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:38:09 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 15:30:28 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "               ~~~#CREATION~~~" << std::endl;
	std::cout << "#1" << std::endl;	
	try 
	{
		Bureaucrat wrong("president", 160);
		std::cout << wrong << std::endl;	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}
	std::cout << "#2" << std::endl;	
	try 
	{
		Bureaucrat wrong("president", 0);
		std::cout << wrong << std::endl;	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}
	std::cout << "#3" << std::endl;	
	try 
	{
		Bureaucrat right("president", 75);
		std::cout << "GRADE : " << right.getGrade() << std::endl;
		std::cout << "NAME : " << right.getName() << std::endl;
		std::cout << right << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}

	std::cout << std::endl;
	std::cout << "  #COPY & ASSIGN  " << std::endl;
	try 
	{
		Bureaucrat right("president", 75);
		std::cout << right << std::endl;

		Bureaucrat rightCopy(right);
		std::cout << rightCopy << std::endl;

		Bureaucrat rightAssign("president assign", 80);
		std::cout << rightAssign << std::endl;

		rightAssign = rightCopy;
		std::cout << rightAssign << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}


	std::cout << std::endl;
	std::cout << "             ~~~#DECREMENT~~~" << std::endl;
	try 
	{
		Bureaucrat right("president", 140);
		std::cout << right << std::endl;
		right.decrement(11);
		std::cout << right << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}
	
	try 
	{
		Bureaucrat right("president", 140);
		std::cout << right << std::endl;
		right.decrement(5);
		std::cout << right << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}

	std::cout << std::endl;
	std::cout << "             ~~~#INCREMENT~~~" << std::endl;
	try 
	{
		Bureaucrat right("president", 10);
		std::cout << right << std::endl;
		right.increment(11);
		std::cout << right << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}
	
	try 
	{
		Bureaucrat right("president", 10);
		std::cout << right << std::endl;
		right.increment(5);
		std::cout << right << std::endl;

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl; 
	}

	return 0;
}

