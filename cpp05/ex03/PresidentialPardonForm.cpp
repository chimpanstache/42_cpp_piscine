/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:02 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/30 19:13:26 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(std::string(target + "_pardon"), 25, 5) 
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)   : Form(src) { *this = src; }

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    Form::operator=(rhs);
	this->_target = rhs._target;

	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw FormUnsignedException();	
	else if(executor.getGrade() > this->getGradeToExecute())	
	{
		throw GradeTooLowException();			
	}
	std::cout << _target <<  " has been pardoned by Zafod BeebleBrox " << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm() {}