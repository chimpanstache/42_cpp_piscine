/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 18:29:46 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/30 18:55:39 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
#define PresidentialPardonForm_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string _target;

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src); 
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
		virtual ~PresidentialPardonForm();
		virtual void execute(Bureaucrat const & executor) const;
};

#endif