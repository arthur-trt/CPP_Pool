/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:12:34 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 13:42:55 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "loser_sed.hpp"

int	main(int argc, char *argv[])
{
	std::ifstream	input;
	std::ofstream	output;
	std::string		filename;

	if (argc != 4)
	{
		std::cout << "Usage: ./loser_sed [file] [pattern] [replacement]" << std::endl;
		return (EXIT_FAILURE);
	}
	filename = argv[1];
	input.open(filename, std::ios::in);
	if (input.fail())
	{
		std::cout << "Error: cannot open file " << filename << std::endl;
		return (EXIT_FAILURE);
	}
	output.open(out_file_name(filename), std::ios::in | std::ios::trunc);
	if (output.fail())
	{
		std::cout << "Error: cannot create file " << out_file_name(filename) << std::endl;
		return (EXIT_FAILURE);
	}
	loser_sed(argv[2], argv[3], input, output);
}
