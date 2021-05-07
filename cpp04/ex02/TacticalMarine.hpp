/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:35:28 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/26 15:43:48 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	
	public:
		TacticalMarine(); //default constructor //canonical form
		TacticalMarine(TacticalMarine const &src); //copy constructor //canonical form
		TacticalMarine &operator=(TacticalMarine const & rhs); //default assignation parameter //canonical form
		virtual ~TacticalMarine();
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

};

#endif 