/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:14:09 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/15 11:27:46 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFY_HPP
# define IDENTIFY_HPP

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <iomanip>

class Base 
{
	public:
		virtual ~Base() {};
};
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base 	*generate(void);
void 	identify(Base* p);
void 	identify(Base& p);

#endif
