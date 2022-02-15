/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:26:08 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:27:13 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int	main(void)
{
	Base	*test1 = generate();

	identify(test1);
	identify(*test1);
	delete test1;
	return (0);
}
