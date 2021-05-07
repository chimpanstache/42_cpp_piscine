/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:38:09 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 17:25:44 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "                ~~~#BUREAUCRAT~~~" << std::endl;
	Bureaucrat Macron("President", 4);

	Intern Mathias;
	Form *rrf;
	rrf = Mathias.makeForm("robotomy request", "Bender");
	Macron.signForm(*rrf);
	Macron.executeForm(*rrf);
	delete rrf;

	Form *scf;
	scf = Mathias.makeForm("shrubbery creation request", "Sasuke");
	Macron.signForm(*scf);
	Macron.executeForm(*scf);
	delete scf;

	Form *ppf;
	ppf = Mathias.makeForm("presidential pardon request", "Staline");
	Macron.signForm(*ppf);
	Macron.executeForm(*ppf);
	delete ppf;


	Form *bsf;
	bsf = Mathias.makeForm("bullshit request", "Maeva Ghennam");

	std::cout << std::endl;
	std::cout << "                ~~~#INTERN COPY~~~" << std::endl;
	Intern Souf = Intern(Mathias);
	Form *test;
	test = Souf.makeForm("presidential pardon request", "Souf");
	Macron.signForm(*test);
	delete test;

	std::cout << std::endl;
	std::cout << "                ~~~#INTERN ASSIGN~~~" << std::endl;
	Souf = Mathias; 
	Form *test2;
	test2 = Souf.makeForm("presidential pardon request", "Mathias");
	Macron.signForm(*test2);
	delete test2;


	return 0;
}