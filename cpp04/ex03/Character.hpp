/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 15:09:56 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 18:58:12 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <fstream>
#include <iostream>

#include "ICharacter.hpp"

//cerif si arr a ete zeroed puis le zero si pas fait 

// class ICharacter;

// class AMateria;

class Character : public ICharacter
{
	protected:
		Character();
		int _size_arr;
		std::string _name;
		AMateria *_arr[5];
		virtual void destroy_array() const;	
		virtual unsigned int materia_already_in_arr(AMateria* m);		
		virtual unsigned int get_arr_size() const;
		virtual void zero_arr();

	public:
		// virtual unsigned int get_arr_size() const;
		Character(std::string const &nom);
		Character(Character const &src);
		Character &operator=(Character const &rhs);
		virtual ~Character();
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		int getMateriaXP(int idx);			
};


#endif
