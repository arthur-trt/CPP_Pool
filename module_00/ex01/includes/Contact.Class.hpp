/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:31:02 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/02 15:57:37 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <map>

class Contact
{
private:
	bool		_is_set;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string _phone_number;
	std::string	_darkest_secret;

	enum	_e_field {
		first_name = 0,
		last_name,
		nick_name,
		phone_number,
		darkest_secret
	};

	std::map<int,std::string> _fields_name
	{
		{ first_name, "First Name" },
		{ last_name, "Last Name" },
		{ nick_name, "Nick Name" },
		{ phone_number, "Phone Number" },
		{ darkest_secret, "Darket Secret" },
	};

	std::map<std::string, std::string> _fields;


public:

	Contact( void );
	~Contact( void );

	/*
	 *	Getter
	 */
	bool		getIsSet( void ) const;
	void	Contact::getFields( void ) const;
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickName( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getDarkestSecret( void ) const;

	/*
	 * Setter
	 */
	bool	setFields( void );
	void	setIsSet( void );
	bool	setFirstName( const std::string firstname );
	bool	setLastName( const std::string lastname );
	bool	setNickName( const std::string nickname );
	bool	setPhoneNumber( const std::string phonenumber );
	bool	setDarkestSecret( const std::string darkestsecret );

};


#endif
