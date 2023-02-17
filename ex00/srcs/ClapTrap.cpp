/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:14 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/16 11:07:58 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return ;
}

// Overloaded
ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Overloaded constructor called for " << Name << std::endl;
	_Name = Name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &Source)
{
	if (Source._Name.empty())
		std::cout << "Copy constructor called. Copying " << Source._Name << ".." << std::endl;
	else
		std::cout << "Copy constructor called. Coping " << Source._Name << " into " << _Name << ".." << std::endl;
	*this = Source;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)

ClapTrap	&ClapTrap::operator=(ClapTrap const &Source)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = Source._Name;
	return (*this);
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

// Member functions
void	ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	std::cout << "This costs " << _Name << " 1 energy point" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " received " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << _Name << " repaired itself, and gets " << amount << " points of damage!" << std::endl;
	std::cout << "This costs " << _Name << " 1 energy point" << std::endl;
}
