/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:38:09 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 16:13:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "                ~~~#BUREAUCRAT~~~" << std::endl;
	Bureaucrat Macron("president", 140);
	std::cout << Macron << std::endl;


	std::cout << std::endl;
	std::cout << "               ~~~#NORMAL~~~" << std::endl;

	std::cout << "   #SIGN TOO LOW" << std::endl;
	try 
	{
		Form Formy("FORMY", 0, 145);
		std::cout << Formy << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl; 
	} 	

	std::cout << "   #SIGN TOO HIGH" << std::endl;
	try 
	{
		Form Formy("FORMY", 160, 145);
		std::cout << Formy << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl; 
	} 		

	std::cout << "   #EXECUTE TOO LOW" << std::endl;
	try 
	{
		Form Formy("FORMY", 145, 0);
		std::cout << Formy << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl; 
	} 	

	std::cout << "   #EXECUTE TOO HIGH" << std::endl;
	try 
	{
		Form Formy("FORMY", 145, 160);
		std::cout << Formy << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl; 
	} 	

	std::cout << "   #SIGN & EXECUTE CORRECT" << std::endl;
	Form Formy("FORMY", 145, 145);

	std::cout << "GRADE TO SIGN : " << Formy.getGradeToSign() << std::endl;
	std::cout << "GRADE TO EXECUTE : " << Formy.getGradeToExecute() << std::endl;
	std::cout << "SIGNED ? " << Formy.getSigned() << std::endl;
	std::cout << "NAME : " << Formy.getName() << std::endl;
	std::cout << Formy << std::endl;
	
	Macron.signForm(Formy);
	std::cout << Formy << std::endl;

	std::cout << std::endl;
	std::cout << "               ~~~#COPY~~~" << std::endl;

	Form FormyCopy = Form(Formy);
	std::cout << FormyCopy << std::endl;
	Macron.signForm(FormyCopy);
	Macron.decrement(6);
	Macron.signForm(FormyCopy);

	std::cout << std::endl;
	std::cout << "               ~~~#ASSIGN~~~" << std::endl;

	Form FormyAssign("FORMY ASSIGN", 130, 130);
	std::cout << FormyAssign << std::endl;
	Macron.signForm(FormyAssign);
	std::cout << FormyAssign << std::endl;	
	FormyAssign = FormyCopy;

	std::cout << FormyAssign << std::endl;
	Macron.increment(20);
	Macron.signForm(FormyAssign);
	std::cout << FormyAssign << std::endl;
	
	return 0;
}