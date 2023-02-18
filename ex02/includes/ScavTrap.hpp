/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:21:41 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/17 20:35:07 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);										// Default constructor
		ScavTrap(std::string Name);							// Overloading constructor
		ScavTrap(ScavTrap const &Source);					// Copy constructor
		ScavTrap	&operator=(ScavTrap const &Source); 	// = operator overloading for ScavTrap class
		~ScavTrap(void);									// Destructor
		void	attack(const std::string &target);			// Member function
		void	guardGate();								// Member function
};

#endif
