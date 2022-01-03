/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthur <arthur@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:07:59 by arthur            #+#    #+#             */
/*   Updated: 2022/01/03 18:18:46 by arthur           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>

class Cat : public Animal
{
private:

public:
    Cat( void );
    Cat( Cat const & other );
    virtual ~Cat( void );

    void    makeSound( void ) const;
};

#endif