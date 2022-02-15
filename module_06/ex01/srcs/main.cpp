/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:08:03 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:09:56 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main(void)
{
	Data	test = {
		42,
		'@',
		"Ceci est un test",
	};

	std::cout << "Data creation :" << std::endl << &test << std::endl;
	std::cout << "Values :" << std::endl << test << std::endl;
	uintptr_t serial = serialize(&test);
	Data deserial = *deserialize(serial);
	std::cout << "After serialize/deserialize :" << std::endl << &deserial << std::endl;
	std::cout << "Values :" << std::endl << deserial << std::endl;
}
