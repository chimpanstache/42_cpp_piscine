/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 16:12:00 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/15 11:52:28 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl << "///////// OPERATORS //////////" << std::endl;
    Fixed x(5.3f);
    Fixed y(5.5f);
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;

    std::cout << std::endl << "///////////// COMPARISON //////////////////" << std::endl;
    Fixed z(x);
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;
    std::cout << "x > y : " << (x > y)<< std::endl;
    std::cout << "x < y : " << (x < y)<< std::endl;
    std::cout << "x >= y : " << (x >= y)<< std::endl;
    std::cout << "x <= y : " << (x <= y)<< std::endl;
    std::cout << "x == y : " << (x == y)<< std::endl;
    std::cout << "x != y : " << (x != y)<< std::endl;
    std::cout << std::endl;
    std::cout << "x > z : " << (x > z)<< std::endl;
    std::cout << "x < z : " << (x < z)<< std::endl;
    std::cout << "x >= z : " << (x >= z)<< std::endl;
    std::cout << "x <= z : " << (x <= z)<< std::endl;
    std::cout << "x == z : " << (x == z)<< std::endl;
    std::cout << "x != z : " << (x != z)<< std::endl;
    std::cout << std::endl;
    std::cout << "y > z : " << (y > z)<< std::endl;
    std::cout << "y < z : " << (y < z)<< std::endl;
    std::cout << "y >= z : " << (y >= z)<< std::endl;
    std::cout << "y <= z : " << (y <= z)<< std::endl;
    std::cout << "y == z : " << (y == z)<< std::endl;
    std::cout << "y != z : " << (y != z)<< std::endl;

    std::cout << std::endl << "//////////////// MAX/MIN //////////////////" << std::endl;
    std::cout << "x is " << x << std::endl;
    std::cout << "y is " << y << std::endl;
    std::cout << "z is " << z << std::endl;
    std::cout << "Fixed::max(x, y): " << Fixed::max(x, y) << std::endl;
    std::cout << "Fixed::max(x, z): " << Fixed::max(x, z) << std::endl;
    std::cout << "Fixed::max(y, z): " << Fixed::max(y, z) << std::endl;
    std::cout << "Fixed::min(x, y): " << Fixed::min(x, y) << std::endl;
    std::cout << "Fixed::min(x, z): " << Fixed::min(x, z) << std::endl;
    std::cout << "Fixed::min(y, z): " << Fixed::min(y, z) << std::endl;

    const Fixed cx(x);
    const Fixed cy(y);
    const Fixed cz(z);
    std::cout << "cx is " << cx << std::endl;
    std::cout << "cy is " << cy << std::endl;
    std::cout << "cz is " << cz << std::endl;
    std::cout << "Fixed::max(cx, cy): " << Fixed::max(cx, cy) << std::endl;
    std::cout << "Fixed::max(cx, cz): " << Fixed::max(cx, cz) << std::endl;
    std::cout << "Fixed::max(cy, cz): " << Fixed::max(cy, cz) << std::endl;
    std::cout << "Fixed::min(cx, cy): " << Fixed::min(cx, cy) << std::endl;
    std::cout << "Fixed::min(cx, cz): " << Fixed::min(cx, cz) << std::endl;
    std::cout << "Fixed::min(cy, cz): " << Fixed::min(cy, cz) << std::endl;

    return 0;
}
