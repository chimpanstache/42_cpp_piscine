/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:26:06 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/23 14:32:31 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RadScorpion_HPP
#define RadScorpion_HPP

# include <iostream>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{	

	public:
		RadScorpion();
		RadScorpion &operator=(RadScorpion const & src);
		RadScorpion(RadScorpion const & src); 
		virtual ~RadScorpion();
		virtual void takeDamage(int);		
};


#endif