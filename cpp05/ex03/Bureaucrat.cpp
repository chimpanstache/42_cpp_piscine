/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:02:04 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 12:45:15 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) :_name(name)
{
	try
	{
		_grade = grade;
		if (_grade < 1)
		{
			_grade = 0;
			throw GradeTooHighException();	
		}
		else if(_grade > 150)	
		{
			throw GradeTooLowException();			
		}
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl; 
	} 
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl; 
	} 	
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	// this->_grade = src._grade;
	*this = src;
	return;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	// this->_name = rhs.getName(); //impossible cuz name is const
	this->_grade = rhs.getGrade();
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::increment(int grade)
{
	try
	{
		this->_grade -= grade;
		if (_grade < 1)
		{
			_grade = 0;
			throw GradeTooHighException();	
		}
		else if(_grade > 150)	
		{
			throw GradeTooLowException();			
		}
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl; 
	} 
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl; 
	} 
}

void Bureaucrat::decrement( int grade)
{
	try
	{
		this->_grade +=grade;
		if (_grade < 1)
		{
			_grade = 0;
			throw GradeTooHighException();	
		}
		else if(_grade > 150)	
		{
			throw GradeTooLowException();			
		}
	}
	catch (GradeTooHighException& e)
	{
		std::cout << e.what() << std::endl; 
	} 
	catch (GradeTooLowException& e)
	{
		std::cout << e.what() << std::endl; 
	} 
}

void Bureaucrat::signForm(Form &will_sign)
{
	try
	{
		will_sign.beSigned(*this);
		std::cout << this->getName() << " signs " << will_sign.getName() << std::endl;		
	}
	catch(std::exception &e)
	{
		std::cout << this->getName() << " can't sign " << will_sign.getName() << " because " << e.what() << std::endl;
	}
	return;		
}

void Bureaucrat::executeForm(Form const &form)
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << this->_name << " didn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}

std::ostream & operator<<(std::ostream &output, Bureaucrat const &bur)
{
	output << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return output;
}

