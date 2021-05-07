/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:29:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/29 17:56:30 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string _target;

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src); 
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
		virtual ~ShrubberyCreationForm();
	
};


#endif