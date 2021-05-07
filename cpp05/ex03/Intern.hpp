/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 15:30:16 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 17:25:59 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

struct forms
{
	Form *form;
	Form *(*fptr)(std::string smth);
	std::string formName;
	struct forms *next;
};

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		Form *makeForm(std::string const &formName, std::string const &target);
		virtual ~Intern(); 
};

#endif