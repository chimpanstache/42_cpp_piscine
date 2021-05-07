/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 12:41:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/02 14:41:54 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "whatever.hpp"

int main( void ) 
{
	{	
		std::cout << "////////////// SUBJECT TESTS //////////////// " << std::endl;
		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{	
		std::cout << "////////////// SWAP TESTS //////////////// " << std::endl;
		int a = -2;
		int b = 3;

		std::cout << "BEFORE SWAP : "  << "a = " << a << ", b = " << b << std::endl;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;

		float c = -5.6f;
		float d = 6.5f;

		std::cout << "BEFORE SWAP : "  << "c = " << c << ", d = " << d << std::endl;
		::swap( c, d );
		std::cout << "c = " << c << ", d = " << d << std::endl;

		double e = -7.8;
		double f = 8.9;

		std::cout << "BEFORE SWAP : "  << "e = " << e << ", f = " << f << std::endl;
		::swap( e, f );
		std::cout << "e = " << e << ", f = " << f << std::endl;		

		std::string g = "chaine1";
		std::string h = "chaine2";

		std::cout << "BEFORE SWAP : " << "g = " << g << ", h = " << h << std::endl;
		::swap(g, h);
		std::cout << "g = " << g << ", h = " << h << std::endl;
	}

	std::cout << std::endl;

	{	
		std::cout << "////////////// MIN TESTS //////////////// " << std::endl;
		int a = -2;
		int b = 3;
		int c = 4;
		int d = 4;

		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		int const &int_addr = ::min( c, d );
		std::cout << "c = " << &c << " ,d = " << &d << "\n             int_addr = " << &int_addr << std::endl;
		
		std::cout << std::endl;
		float e = -2.3f;
		float f = 3.2f;
		float g = 3.1f;
		float h = 3.1f;

		std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
		float const &float_addr = ::min( g, h );
		std::cout << "g = " << &g << " ,h = " << &h << "\n           float_addr = " << &float_addr << std::endl;
		
		std::cout << std::endl;
		double i = -7.8;
		double j = 8.9;
		double k = -7.8;
		double l = -7.8;	

		std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
		double const &double_addr = ::min( k, l );
		std::cout << "k = " << &k << " ,l = " << &l << "\n          double_addr = " << &double_addr << std::endl;	
		
		std::cout << std::endl;
		std::string m = "chaine1";
		std::string n = "chaine2";
		std::string o = "chaine3";
		std::string p = "chaine3";

		std::cout << "min( m, n ) = " << ::min( m, n ) << std::endl;
		std::string const &str_addr = ::min( o, p );
		std::cout << "o = " << &o << " ,p = " << &p << "\n             str_addr = " << &str_addr << std::endl;	
	}	
	
	std::cout << std::endl;

	{	
		std::cout << "////////////// MAX TESTS //////////////// " << std::endl;
		int a = -2;
		int b = 3;
		int c = 4;
		int d = 4;

		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		int const &int_addr = ::max( c, d );
		std::cout << "c = " << &c << " ,d = " << &d << "\n             int_addr = " << &int_addr << std::endl;

		std::cout << std::endl;
		float e = -2.3f;
		float f = 3.2f;
		float g = 3.1f;
		float h = 3.1f;

		std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
		float const &float_addr = ::max( g, h );
		std::cout << "g = " << &g << " ,h = " << &h << "\n           float_addr = " << &float_addr << std::endl;

		std::cout << std::endl;
		double i = -7.8;
		double j = 8.9;
		double k = -7.8;
		double l = -7.8;	

		std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;
		double const &double_addr = ::max( k, l );
		std::cout << "k = " << &k << " ,l = " << &l << "\n          double_addr = " << &double_addr << std::endl;	

		std::cout << std::endl;
		std::string m = "chaine1";
		std::string n = "chaine2";
		std::string o = "chaine3";
		std::string p = "chaine3";

		std::cout << "max( m, n ) = " << ::max( m, n ) << std::endl;
		std::string const &str_addr = ::max( o, p );
		std::cout << "o = " << &o << " ,p = " << &p << "\n             str_addr = " << &str_addr << std::endl;	
	}

	return 0;
}