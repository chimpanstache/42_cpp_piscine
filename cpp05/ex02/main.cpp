/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 15:38:09 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/28 20:12:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "                ~~~#BUREAUCRAT~~~" << std::endl;
	Bureaucrat Macron("President", 4);
	Bureaucrat Brigitte("PremiereDame", 15);
	Bureaucrat Castex("Ministre", 60);
	Bureaucrat Lallement("Prefet", 146);

	std::cout << Macron << std::endl;	
	std::cout << Brigitte << std::endl;	
	std::cout << Castex << std::endl;	
	std::cout << Lallement << std::endl;	

	std::cout << std::endl;
	std::cout << "                ~~~#SHRUBBERY~~~" << std::endl;
	ShrubberyCreationForm Shrubby("Toni_Musulin");
	std::cout << Shrubby << std::endl;	
	Lallement.signForm(Shrubby);
	Lallement.executeForm(Shrubby);

	Castex.signForm(Shrubby);
	Lallement.executeForm(Shrubby);	

	Castex.executeForm(Shrubby);

	std::cout << "       #COPY" << std::endl;
	ShrubberyCreationForm ShrubbyCopy(Shrubby);
	std::cout << ShrubbyCopy << std::endl;	
	Castex.signForm(ShrubbyCopy);

	std::cout << "       #ASSIGN" << std::endl;
	ShrubberyCreationForm ShrubbyAssign("Redoine_Faid");
	std::cout << ShrubbyAssign << std::endl;	
	Castex.executeForm(ShrubbyAssign);	
	ShrubbyAssign = ShrubbyCopy;
	std::cout << ShrubbyAssign << std::endl;	
	Castex.executeForm(ShrubbyAssign);

	std::cout << std::endl;
	std::cout << "                ~~~#ROBOTOMY~~~" << std::endl;
	RobotomyRequestForm Romy("Toni_Musulin");
	std::cout << Romy << std::endl;	
	Lallement.signForm(Romy);
	Lallement.executeForm(Romy);

	Castex.signForm(Romy);
	Lallement.executeForm(Romy);	

	Castex.executeForm(Romy);
	Brigitte.executeForm(Romy);	
	Brigitte.executeForm(Romy);	

	std::cout << "       #COPY" << std::endl;
	RobotomyRequestForm RomyCopy(Romy);
	std::cout << RomyCopy << std::endl;	
	Castex.signForm(RomyCopy);

	std::cout << "       #ASSIGN" << std::endl;
	RobotomyRequestForm RomyAssign("Redoine_Faid");
	std::cout << RomyAssign << std::endl;	
	Castex.executeForm(RomyAssign);	
	RomyAssign = RomyCopy;
	std::cout << RomyAssign << std::endl;	
	Castex.executeForm(RomyAssign);
	Brigitte.executeForm(Romy);	

	std::cout << std::endl;
	std::cout << "                ~~~#PRESIDENTIAL PARDON~~~" << std::endl;
	PresidentialPardonForm Pardon("Toni_Musulin");
	std::cout << Pardon << std::endl;	
	Castex.signForm(Pardon);	
	Castex.executeForm(Pardon);
	Brigitte.signForm(Pardon);
	Castex.executeForm(Pardon);	
	std::cout << Pardon << std::endl;	

	Macron.executeForm(Pardon);	

	std::cout << "       #COPY" << std::endl;
	PresidentialPardonForm PardonCopy(Pardon);
	std::cout << PardonCopy << std::endl;	
	Castex.signForm(PardonCopy);

	std::cout << "       #ASSIGN" << std::endl;
	PresidentialPardonForm PardonAssign("Redoine_Faid");
	std::cout << PardonAssign << std::endl;	
	Brigitte.executeForm(PardonAssign);	
	PardonAssign = PardonCopy;
	std::cout << PardonAssign << std::endl;	
	Brigitte.executeForm(PardonAssign);
	Macron.executeForm(Pardon);	

	return 0;
}