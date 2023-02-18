/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/18 14:42:29 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 14:49:27 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		FragTrap(void);										// Default constructor
		FragTrap(std::string Name);							// Overloading constructor
		FragTrap(FragTrap const &Source);					// Copy constructor
		FragTrap	&operator=(FragTrap const &Source); 	// = operator overloading for FragTrap class
		~FragTrap(void);									// Destructor
		void	attack(const std::string &target);			// Member function
		void	highFivesGuys();							// Member function
};

#endif
