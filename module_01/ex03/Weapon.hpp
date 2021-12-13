/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 14:25:29 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/13 14:26:25 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		std::string const &getType() const;
		void setType(std::string type);
	private:
		std::string _type;
};

#endif
