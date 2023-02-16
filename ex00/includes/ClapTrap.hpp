/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:10 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/16 11:07:03 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);								// Constructor
		ClapTrap(std::string Name);					// Constructor
		ClapTrap(ClapTrap const &Source);			// Copy constructor
		ClapTrap	&operator=(ClapTrap const &Source);
		~ClapTrap(void);							// Destructor
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	private:
		std::string	_Name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
