/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/01/30 08:18:11 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class	Fixed {
	public:
		Fixed(void);								// Constructor
		Fixed(Fixed const &Source);					// Copy constructor
		~Fixed(void);								// Destructor
		Fixed	&operator=(Fixed const &Number);	// Implicitly-declared copy assignment operator
		int		getRawBits(void) const;				// Getter method
		void	setRawBits(int const raw);			// Setter method
	private:
		int					_fixedValue;
		static int const	_fractionalBits;
};

#endif