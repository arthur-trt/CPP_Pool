/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrouill <atrouill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:21:25 by atrouill          #+#    #+#             */
/*   Updated: 2022/02/21 09:41:53 by atrouill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_HPP
# define CLASS_HPP

# include <exception>
# include <cstddef>
# include <iostream>

template <typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_size;
	public:

		class IndexError : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Invalid index");
				}
		};

		Array(void) throw() : _array(0), _size(0)
		{}

		Array(unsigned int n) throw() : _array(new T[n]), _size(n)
		{
			for (size_t i = 0; i < this->_size; i++)
			{
				_array[i] = T();
			}
		}

		Array(const Array & src) throw() : _array(NULL)
		{
			*this = src;
		}

		~Array( void ) throw()
		{
			delete[] this->_array;
		}

		Array	&operator=(const Array & rhs) throw()
		{
			this->_size = rhs.size();
			if (this->_array != NULL)
				delete[] this->_array;
			this->_array = new T[this->_size];
			for (size_t i = 0; i < this->_size; i++)
			{
				this->_array[i] = rhs[i];
			}
			return (*this);
		}

		T		&operator[](unsigned int n) const throw(Array::IndexError)
		{
			if (n >= this->_size)
				throw Array::IndexError();
			return (this->_array[n]);
		}

		unsigned int	size(void) const throw()
		{
			return (this->_size);
		}
};

#endif
