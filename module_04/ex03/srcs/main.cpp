/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 12:13:08 by atrouill          #+#    #+#             */
/*   Updated: 2022/01/24 13:33:02 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.Class.hpp"
# include "AMateria.Class.hpp"
# include "Ice.Class.hpp"
# include "Cure.Class.hpp"
# include "IMateriaSource.Class.hpp"
# include "MateriaSource.Class.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}
