/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:12:42 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/26 20:03:14 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include <iostream>
#include <fstream>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

struct squad_list
{
	ISpaceMarine *data;
	struct squad_list *next;
	struct squad_list *previous;
};

class Squad : public ISquad
{
	private:
		void destroy_squad();
		int check_if_already_in_squad(ISpaceMarine *marine);	

	protected:
		unsigned int _count;
		squad_list *_squad;

	public:
		Squad(); //default constructor //canonical form
		Squad(Squad const &src); //copy constructor //canonical form
		Squad &operator=(Squad const & rhs); //default assignation parameter //canonical form
		virtual ~Squad();
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
};

#endif