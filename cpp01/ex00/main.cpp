/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 16:19:30 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/21 13:02:53 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int ponyOnTheStack()
{
	Pony Pony_Stack = Pony("ON THE STACK");
	return 0;	
}

int ponyOnTheHeap()
{
	Pony *Ponyheap = new Pony("ON THE HEAP");
	delete Ponyheap;
	return 0;
}

int main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return 0;
}