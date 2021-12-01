/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:02:13 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/01 18:24:35 by atrouill         ###   ########.fr       */
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

public:
	Phonebook( void );
	~Phonebook( void );

	bool	add_contact( void );
};

#endif
