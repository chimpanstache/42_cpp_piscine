/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 17:54:51 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/27 15:18:22 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <fstream>
#include <iostream>
#include "IMateriaSource.hpp"

class AMateria;	

class IMateriaSource;	

class MateriaSource : public IMateriaSource
{
	protected:
		AMateria *_store[5];
		int _size_store;
		virtual unsigned int get_storeSize() const ;
		virtual void zero_store();
		void destroy_store();
		unsigned int materia_already_in_arr(AMateria* m);

	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		MateriaSource &operator=(MateriaSource const &rhs);
		virtual ~MateriaSource();
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);

};


#endif