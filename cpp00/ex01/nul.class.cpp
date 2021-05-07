/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nul.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:30:09 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/06 17:25:00 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "nul.class.hpp"

Phonebook::Phonebook() {
	return ;
}

Phonebook::~Phonebook( void ){

	return ;
}

std::string Phonebook::getFirstname() const
{
	return this->_first_name;
}

std::string Phonebook::getLastname() const
{
	return this->_last_name;
}

std::string Phonebook::getNickname() const
{
	return this->_nickname;
}

std::string Phonebook::getLogin() const
{
	return this->_login;
}

std::string Phonebook::getPostaladdress() const
{
	return this->_postal_address;
}

std::string Phonebook::getEmailaddress() const
{
	return this->_email_address;
}

std::string Phonebook::getPhonenumber() const
{
	return this->_phone_number;
}

std::string Phonebook::getBirthdaydate() const
{
	return this->_birthday_date;
}

std::string Phonebook::getFavoritemeal() const
{
	return this->_favorite_meal;
}

std::string Phonebook::getUnderwearcolor() const
{
	return this->_underwear_color;
}

std::string Phonebook::getDarkestsecret() const
{
	return this->_darkest_secret;
}

void Phonebook::setFirstname(std::string str) 
{
	this->_first_name = str;
}

void Phonebook::setLastname(std::string str)
{
	this->_last_name = str;
}

void Phonebook::setNickname(std::string str)
{
	this->_nickname = str;
}

void Phonebook::setLogin(std::string str)
{
	this->_login = str;
}

void Phonebook::setPostaladdress(std::string str)
{
	this->_postal_address = str;
}

void Phonebook::setEmailaddress(std::string str)
{
	this->_email_address = str;
}

void Phonebook::setPhonenumber(std::string str)
{
	this->_phone_number = str;
}

void Phonebook::setBirthdaydate(std::string str)
{
	this->_birthday_date = str;
}

void Phonebook::setFavoritemeal(std::string str)
{
	this->_favorite_meal = str;
}

void Phonebook::setUnderwearcolor(std::string str)
{
	this->_underwear_color = str;
}

void Phonebook::setDarkestsecret(std::string str)
{
	this->_darkest_secret = str;
}