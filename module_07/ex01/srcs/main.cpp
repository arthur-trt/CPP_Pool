/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:10:30 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 12:11:06 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "array.hpp"

int	main(void)
{
	std::string strArray[3] = {"this", "is a", "template"};
	iter(strArray, 3, print);


	int	intArray[4] = {0, 1, 2, 3};
	iter(intArray, 4, print);

	int const	intConstArray[6] = {4, 5, 6, 7, 8, 9};
	iter(intConstArray, 6, print);
}
