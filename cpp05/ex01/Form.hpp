/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 16:08:39 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/28 16:29:53 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		const int _grade_to_sign;
		const int _grade_to_execute;
		bool _signed;
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
		Form();
		Form(std::string name, int to_sign, int to_execute);
		Form(Form const &src);
		Form&operator=(Form const &rhs);
		std::string getName() const;
		void beSigned(Bureaucrat const &will_sign);	
		int getGradeToSign() const;
		int getGradeToExecute() const;		
		bool getSigned() const;
		~Form();		
};

std::ostream & operator<<(std::ostream &output, Form const &form);

#endif