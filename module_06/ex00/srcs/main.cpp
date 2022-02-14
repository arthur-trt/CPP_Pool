/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:23:08 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/09 10:49:11 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Scalar.Class.hpp"
# include "functions.hpp"
# include <string>
# include <iostream>
# include <cstdlib>

int	main( int argc, char *argv[] )
{
	Scalar	test( argv[1] );
	//std::string	test(argv[1]);

	if (argc > 2)
	{
		std::cerr << "Usage : ./convert <number_to_convert>" << std::endl;
		return (EXIT_FAILURE);
	}
	std::cout << test << std::endl;
	return (EXIT_SUCCESS);
}
