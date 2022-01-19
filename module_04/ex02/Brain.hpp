/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 14:41:26 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/10 08:39:08 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# ifndef NB_IDEAS
#  define NB_IDEAS 100
# endif

# include <string>
# include <cstdlib>
# include <iostream>
# include <ctime>
# include <stdexcept>
# include <sstream>


class Brain
{
	public:
		Brain( void );
		Brain( Brain const & other );
		~Brain( void );

		Brain	&	operator=( Brain const & rhs );

		std::string	const	&	getIdea( size_t index ) const;

	private:
		std::string	ideas[NB_IDEAS];
};

#endif
