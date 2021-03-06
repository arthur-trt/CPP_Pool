/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:02:13 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/08 16:33:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# define MAX_CONTACT 8

# include "Contact.Class.hpp"
# include <string>

class Phonebook
{
private:
	Contact		_contacts[MAX_CONTACT];
	static int	_contacts_set;

	int		first_unset( void );

public:
	Phonebook( void );
	~Phonebook( void );

	void	print_index( void );
	bool	add_contact( void );
	bool	print_contact( int index ) const;
};

#endif
