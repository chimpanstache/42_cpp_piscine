/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:02 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 17:55:40 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(std::string(target + "_shrubbery"), 145, 137) 
{
	_target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)     : Form(src) { *this = src; }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	Form::operator=(rhs);
	this->_target = rhs._target;

	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{

	if (this->getSigned() == false)
		throw FormUnsignedException();	
	else if(executor.getGrade() > this->getGradeToExecute())	
	{
		throw GradeTooLowException();			
	}
	std::string name = _target + "_shrubbery";
	std::ofstream file(name);
	file << "      /\\      \n     /\\*\\     \n    /\\O\\*\\    \n   /*/\\/\\/\\   \n  /\\O\\/\\*\\/\\  \n /\\*\\/\\*\\/\\/\\ \n/\\O\\/\\/*/\\/O/\\\n      ||      \n      ||      \n      ||\n" << std::endl;
	file.close();
	
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}