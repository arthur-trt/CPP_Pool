/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:31:02 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/01 17:23:12 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nick_name;
	std::string _phone_number;
	std::string	_darkest_secret;

public:

	Contact( void );
	~Contact( void );

	/*
	 *	Getter
	 */
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickName( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getDarkestSecret( void ) const;

	/*
	 * Setter
	 */
	void	setFirstName( const std::string firstname );
	void	setLastName( const std::string lastname );
	void	setNickName( const std::string nickname );
	void	setPhoneNumber( const std::string phonenumber );
	void	setDarkestSecret( const std::string darkestsecret );

};


#endif
