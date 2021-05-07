/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nul.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehafidi <ehafidi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:41:14 by ehafidi           #+#    #+#             */
/*   Updated: 2021/04/06 17:00:33 by ehafidi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUL_CLASS_H
# define NUL_CLASS_H

#include <ctype.h>
#include <iostream>
#include <string>
#include <iomanip>

class Phonebook {

private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;	
	std::string _email_address;
	std::string _phone_number;
	std::string _birthday_date;	
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

public:


	std::string getFirstname() const ;
	std::string getLastname() const ;	
	std::string getNickname() const ;
	std::string getLogin() const ;	
	std::string getPostaladdress() const ;
	std::string getEmailaddress() const ;
	std::string getPhonenumber() const ;
	std::string getBirthdaydate() const ;
	std::string getFavoritemeal() const ;				
	std::string getUnderwearcolor() const ;
	std::string getDarkestsecret() const ;
	void setFirstname(std::string str);
	void setLastname(std::string str);	
	void setNickname(std::string str);
	void setLogin(std::string str);	
	void setPostaladdress(std::string str);
	void setEmailaddress(std::string str);
	void setPhonenumber(std::string str);
	void setBirthdaydate(std::string str);
	void setFavoritemeal(std::string str);				
	void setUnderwearcolor(std::string str);
	void setDarkestsecret(std::string str);			
	
	Phonebook();
	~Phonebook( void );

};

#endif