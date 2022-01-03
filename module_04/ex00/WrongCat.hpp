/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:03:37 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 19:10:06 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{
private:

public:
    WrongCat( void );
    WrongCat( WrongCat const & other );
    virtual ~WrongCat( void );

    void    makeSound( void ) const;
};

#endif