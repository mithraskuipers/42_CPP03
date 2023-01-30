/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/01/30 08:18:16 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

// Constructor
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_fixedValue = 0;
	return ;
}

// Copy constructor
Fixed::Fixed(const Fixed &Source)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Source;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)
Fixed	&Fixed::operator=(Fixed const &Number)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedValue = Number.getRawBits();
	return (*this);
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;	
}

// Getter method.
// Basically provided in the subject
int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

// Setter method.
// Basically provided in the subject
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called"<< std::endl;
	this->_fixedValue = raw;
}
