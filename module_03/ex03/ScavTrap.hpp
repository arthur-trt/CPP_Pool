/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:09:37 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 16:47:26 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include "ClapTrap.hpp"

class   ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap & other );
    ~ScavTrap( void );

    ScavTrap    &operator=( const ScavTrap & other );
    void        GuardGate( void );

    void	attacK( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );	
};

#endif