/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 11:35:34 by arthur            #+#    #+#             */
/*   Updated: 2022/01/19 11:16:38 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
class ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hit_pts;
	unsigned int	_energy_pts;
	unsigned int	_attack_damage;
public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( const ClapTrap & other );
	~ClapTrap( void );

	ClapTrap &operator=( const ClapTrap & other );

	void	attacK( std::string const & target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};

#endif
