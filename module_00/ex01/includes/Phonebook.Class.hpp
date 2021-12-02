/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:02:13 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/02 11:44:48 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.Class.hpp"
# include <string>

class Phonebook
{
private:
	Contact		_contacts[8];
	static int	_total;

	int		first_unset( void );

public:
	Phonebook( void );
	~Phonebook( void );

	bool	add_contact( void );
};

#endif
