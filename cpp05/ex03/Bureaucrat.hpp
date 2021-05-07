/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 19:02:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 12:44:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		Bureaucrat();
		const std::string _name;
		int _grade;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too high");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Grade too low");
				}
		};
		
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat&operator=(Bureaucrat const &rhs);
		void signForm(Form &will_sign);		
		void increment( int grade); 
		void decrement( int grade);
		std::string const getName() const;
		int getGrade() const;
		void executeForm(Form const &form);
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &output, Bureaucrat const &bur);

#endif
