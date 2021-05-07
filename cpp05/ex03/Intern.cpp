/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:31:44 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 17:26:17 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(Intern const &src){ *this = src; }
Intern &Intern::operator=(Intern const &rhs){  (void) rhs; return *this; }
Intern::~Intern(){} 

Form *ShrubberyCreationFormCreation(std::string smth)
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(smth);
	return form;
}

Form *PresidentialPardonFormCreation(std::string smth)
{
	PresidentialPardonForm *form = new PresidentialPardonForm(smth);
	return form;
}

Form *RobotomyRequestFormCreation(std::string smth)
{
	RobotomyRequestForm *form = new RobotomyRequestForm(smth);
	return form;
}

Form *Intern::makeForm(std::string const &formName, std::string const &target)
{
	forms link1;
	link1.fptr	= &ShrubberyCreationFormCreation; 
	link1.formName	= "shrubbery creation request"; 
	link1.next = 0;

	forms link2;
	link2.fptr	= &PresidentialPardonFormCreation; 
	link2.formName	= "presidential pardon request"; 
	link2.next = &link1;

	forms link3;
	link3.fptr	= &RobotomyRequestFormCreation; 
	link3.formName	= "robotomy request"; 
	link3.next = &link2;

	forms *ptr;

	ptr = &link3;

	while(ptr != 0)
	{
		if (formName == ptr->formName)
		{
			std::cout << " Intern creates " << target << std::endl;
			return ptr->fptr(target);	
		}
		ptr = ptr->next;
	}
	std::cout << " Intern cannot create form cause it does not exist ya stiubid " << target << std::endl;
	return NULL;
}
