/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:08:56 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 16:24:29 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// Form::Form(){}

Form::~Form(){}

Form::Form(std::string name, int to_sign, int to_execute) :_name(name), _grade_to_sign(to_sign), _grade_to_execute(to_execute), _signed(false) 
{
	if (_grade_to_sign < 1 || _grade_to_execute < 1)
		throw GradeTooHighException();	
	else if(_grade_to_sign > 150 || _grade_to_execute > 150)	
	{
		throw GradeTooLowException();			
	}	
}

Form::Form(Form const &src) : 
_name(src.getName()),
_grade_to_sign(src.getGradeToSign()), 
_grade_to_execute(src.getGradeToExecute()),
_signed(src._signed)
{
	*this = src;
}

Form &Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;

	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_grade_to_sign;
}

int Form::getGradeToExecute() const
{
	return this->_grade_to_execute;
}

bool Form::getSigned() const
{
	return this->_signed;
}

std::ostream & operator<<(std::ostream &output, Form const &form)
{
	output << "Name of the form: " << form.getName()
	 << "\n To sign, you must be: "<< form.getGradeToSign()
	  << "\n To execute yo must be: " << form.getGradeToExecute()
	  << "\n is the form signed yet ? " << form.getSigned();
	return output;
}

void Form::beSigned(Bureaucrat const &will_sign)
{
	if (this->_grade_to_sign < will_sign.getGrade())
	{
		throw GradeTooLowException();
	}
	else 
	{
		this->_signed = true;
	}
}