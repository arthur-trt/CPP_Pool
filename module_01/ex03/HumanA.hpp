/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:44:45 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 12:09:20 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"
# include <iostream>
# include <string>

class HumanA
{
	private:
		std::string				_name;
		Weapon					&_weapon;

	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void					attack(void);
};


#endif
