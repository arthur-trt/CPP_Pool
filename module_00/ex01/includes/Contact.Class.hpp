/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:31:02 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/09 12:49:31 by atrouill         ###   ########.fr       */
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

	enum	_e_field {
		first_name = 0,
		last_name,
		nick_name,
		phone_number,
		darkest_secret
	};

	std::string	_fields[darkest_secret + 1];
	std::string	_fields_name[darkest_secret + 1];

public:

	Contact( void );
	~Contact( void );

	/*
	** Getter
	*/
	std::string getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickName(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

	/*
	**	Setter
	*/
	void		setFirstName(std::string input);
	void		setLastName(std::string input);
	void		setNickName(std::string input);
	void		setPhoneNumber(std::string input);
	void		setDarkestSecret(std::string input);

	/*
	**	Utils
	*/
	bool		isSet( void ) const;
	bool		addContact( void );
	bool		removeContact( void );
	void		print_contact( void ) const;
};


#endif
