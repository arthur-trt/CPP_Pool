/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser_sed.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:12:47 by atrouill          #+#    #+#             */
/*   Updated: 2021/12/14 13:39:39 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_SED_HPP
# define LOSER_SED_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <iomanip>

std::string	out_file_name(std::string filename);

void	loser_sed(std::string s1, std::string s2, std::ifstream &input, std::ofstream &output);

#endif
