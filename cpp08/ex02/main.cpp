/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 13:41:41 by ehafidi           #+#    #+#             */
/*   Updated: 2021/05/07 10:35:40 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    std::cout << "//////////////////// S/O @cacharle pour les travaux ////////////////////" << std::endl;   
    {
        std::cout << "//////////////////// SUBJECT MAIN ////////////////////" << std::endl;
        {
            MutantStack<int> mstack;
            mstack.push(5);
            mstack.push(17);
            std::cout << mstack.top() << std::endl;
            mstack.pop();
            std::cout << mstack.size() << std::endl;
            mstack.push(3);
            mstack.push(5);
            mstack.push(737);
            mstack.push(0);
            MutantStack<int>::iterator it = mstack.begin();
            MutantStack<int>::iterator ite = mstack.end();
            ++it;
            --it;
            while (it != ite)
            {
                std::cout << *it << std::endl;
                ++it;
            }
            std::stack<int> s(mstack);
        }
        std::cout << "//////////////////////////////////////////////////////////" << std::endl;
        {
            std::list<int> mstack;
            mstack.push_back(5);
            mstack.push_back(17);
            std::cout << mstack.back() << std::endl;
            mstack.pop_back();
            std::cout << mstack.size() << std::endl;
            mstack.push_back(3);
            mstack.push_back(5);
            mstack.push_back(737);
            mstack.push_back(0);
            std::list<int>::iterator it = mstack.begin();
            std::list<int>::iterator ite = mstack.end();
            ++it;
            --it;
            while (it != ite)
            {
                std::cout << *it << std::endl;
                ++it;
            }
            std::list<int> s(mstack);
        }
    }

    std::cout << std::endl;

    {
        std::cout << "/////////////////////// METHODS ///////////////////////////" << std::endl;

        std::cout << "/////////////////////// DEFAULT CONSTRUCTOR /////////////////////////" << std::endl;
        MutantStack<int> a;
        std::cout << a.empty() << std::endl;
        std::cout << a.size() << std::endl;
        a.push(1);
        a.push(2);
        a.push(3);
        std::cout << a.empty() << std::endl;
        std::cout << a.size() << std::endl;
        std::cout << a.top() << std::endl;

        std::cout << "/////////////////////// COPY CONSTRUCTOR ////////////////////////" << std::endl;
        MutantStack<int> b(a);
        std::cout << b.empty() << std::endl;
        std::cout << b.size() << std::endl;
        std::cout << b.top() << std::endl;
        b.push(4);
        std::cout << b.top() << std::endl;
        std::cout << a.top() << std::endl;

        std::cout << "////////////////////// ASSIGN" << std::endl;
        MutantStack<int> c;
        c.push(-1);
        c = a;
        std::cout << c.empty() << std::endl;
        std::cout << c.size() << std::endl;
        std::cout << c.top() << std::endl;
        c.push(4);
        std::cout << c.top() << std::endl;
        std::cout << a.top() << std::endl;

        std::cout << "///////////////////////// POP" << std::endl;
        a.pop();
        a.pop();
        std::cout << a.empty() << std::endl;
        std::cout << a.size() << std::endl;
        std::cout << a.top() << std::endl;
        std::cout << "///////////////////////// COMPARISON" << std::endl;
        std::cout << "///////////////////////// #A" << std::endl;		
        for (MutantStack<int>::iterator it = a.begin(); it != a.end(); ++it)
            std::cout << *it << std::endl;
        std::cout << "///////////////////////// #B" << std::endl;		

        for (MutantStack<int>::iterator it = b.begin(); it != b.end(); ++it)
            std::cout << *it << std::endl;
        std::cout << "///////////////////////// #C" << std::endl;		

        for (MutantStack<int>::iterator it = c.begin(); it != c.end(); ++it)
            std::cout << *it << std::endl;			

        std::cout << std::endl;		

        std::cout << "(a == b) : " << (a == b) << std::endl;
        std::cout << "(a != c) : " << (a != c) << std::endl;
        std::cout << "(a < c ) : " << (a < c ) << std::endl;
        std::cout << "(a > c ) : " << (a > c ) << std::endl;
        std::cout << "(a <= c) : " << (a <= c) << std::endl;
        std::cout << "(a >= c) : " << (a >= c) << std::endl;
    }

    std::cout << std::endl;

    {
        std::cout << "////////////////////// ITERATOR //////////////////////" << std::endl;
        MutantStack<float> a;
        a.push(1.1f);
        a.push(2.2f);
        a.push(3.3f);

        std::cout << "/////////////////////// PRE INCREMENT" << std::endl;
        for (MutantStack<float>::iterator it = a.begin(); it != a.end(); ++it)
            std::cout << *it << std::endl;

        std::cout << "//////////////////////// POST INCREMENT" << std::endl;
        for (MutantStack<float>::iterator it = a.begin(); it != a.end(); it++)
            std::cout << *it << std::endl;

        std::cout << "//////////////////////// PRE DECREMENT" << std::endl;
        for (MutantStack<float>::iterator it = --a.end(); it != a.begin(); --it)
            std::cout << *it << std::endl;

        std::cout << "/////////////////////// POST DECREMENT" << std::endl;
        for (MutantStack<float>::iterator it = --a.end(); it != a.begin(); it--)
            std::cout << *it << std::endl;

        std::cout << "/////////////////////// ARROW OPERATOR" << std::endl;
        MutantStack<float>::iterator it_arrow = a.begin();
        std::cout << it_arrow.operator->() << std::endl;
        std::cout << *(it_arrow.operator->()) << std::endl;

        std::cout << "////////////////////// PRE INCREMENT / DEREF" << std::endl;
        for (MutantStack<float>::iterator it = a.begin(); it != --a.end();)
            std::cout << (*++it) << std::endl;

        std::cout << "////////////////////// POST INCREMENT / DEREF" << std::endl;
        for (MutantStack<float>::iterator it = a.begin(); it != --a.end();)
            std::cout << *it++ << std::endl;

        std::cout << "////////////////////// COMPARISON" << std::endl;
        std::cout << (a.begin() == a.end()) << std::endl;
        std::cout << (a.begin() != a.end()) << std::endl;

        std::cout << "///////////////////// COPY CONSTRUCTOR" << std::endl;
        MutantStack<float>::iterator it_copied = ++a.begin();
        MutantStack<float>::iterator it_copy(it_copied);
        std::cout << *it_copied << std::endl;
        std::cout << *it_copy << std::endl;

        std::cout << "////////////////////// ASSIGNMENT" << std::endl;
        MutantStack<float>::iterator it_assign(a.begin());
        it_assign = it_copied;
        std::cout << *it_copied << std::endl;
        std::cout << *it_assign << std::endl;

        std::cout << "////////////////////// ITERATOR ASSIGN" << std::endl;
        for (MutantStack<float>::iterator it = a.begin(); it != a.end(); ++it)
            *it = 4.4f;
        for (MutantStack<float>::iterator it = a.begin(); it != a.end(); ++it)
            std::cout << *it << std::endl;

        std::cout << "////////////////////// MORE" << std::endl;
        MutantStack<float> d;
        d.push(0.5f);
        d.push(1.5f);
        d.push(2.5f);
        d.push(3.5f);
        d.push(4.5f);
        d.push(5.5f);
        d.push(6.5f);
        d.push(7.5f);
        d.push(8.5f);
        d.push(9.5f);
        d.push(1.9f);
        for (MutantStack<float>::iterator it = d.begin(); it != d.end(); ++it)
            std::cout << *it << std::endl;

    }

	return 0;
}