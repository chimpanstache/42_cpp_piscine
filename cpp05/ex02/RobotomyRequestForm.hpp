/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:29:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/30 18:55:39 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"
#include <ctime>
#include <unistd.h>

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src); 
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
		virtual void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;		
		virtual ~RobotomyRequestForm();
	
};

#endif