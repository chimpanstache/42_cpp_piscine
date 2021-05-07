/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:42:37 by ehafidi           #+#    #+#             */
/*   Updated: 2021/03/02 17:53:36 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
	std::string buf;
	
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1 ; i < argc ; i++)
		buf = buf + argv[i];	
	for (int i = 0 ; buf[i] ; i++)
		buf[i] = toupper(buf[i]);
	std::cout << buf << std::endl;
	return 0;
}	