/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 11:35:28 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/25 11:45:26 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AssaultTerminator_HPP
#define AssaultTerminator_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	
	

	public:
		AssaultTerminator(); //default constructor //canonical form
		AssaultTerminator(AssaultTerminator const &src); //copy constructor //canonical form
		AssaultTerminator &operator=(AssaultTerminator const & rhs); //default assignation parameter //canonical form
		virtual ~AssaultTerminator();
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};







#endif 