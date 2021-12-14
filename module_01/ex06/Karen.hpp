/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.Class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 15:50:43 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 15:59:45 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_CLASS_HPP
# define KAREN_CLASS_HPP

# include <string>

class	Karen
{
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );

		std::string		_levels[4];

	public:
		Karen(void);
		~Karen(void);

		void	complain( std::string level );
};

#endif
