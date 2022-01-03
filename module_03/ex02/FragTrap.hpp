/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:09:37 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 16:40:03 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class   FragTrap : public ClapTrap
{
public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap & other );
    ~FragTrap( void );

    FragTrap    &operator=( const FragTrap & other );
    void        highFivesGuys( void );

    void	attacK( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );	
};

#endif