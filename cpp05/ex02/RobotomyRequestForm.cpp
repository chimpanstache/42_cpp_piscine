/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:57:02 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/30 19:13:26 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(std::string(target + "_robotomy"), 72, 45) 
{
	_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) { *this = src; }

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	Form::operator=(rhs);
	this->_target = rhs._target;

	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw FormUnsignedException();	
	else if(executor.getGrade() > this->getGradeToExecute())	
	{
		throw GradeTooLowException();			
	}
	sleep(1);
	srand(time(NULL));
	int randNum = (rand() % 2) + 1;
	if (randNum == 1)
	{
		std::cout << " grrrrrrrrrrr pah src:https://www.youtube.com/watch?v=yj2gUEu6Fe8&ab_channel=FilmswaveClubhouse" << std::endl;
		std::cout << _target <<  " has been robotomized " << std::endl;
	}
	else if (randNum == 2)
	{
		std::cout << "You failed to robotomize " << this->_target << " because he outsmarted you, stupid hoe " << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}