/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/18 14:41:47 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 15:30:49 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ClapTrap.hpp"
#include "./../includes/FragTrap.hpp"

// Constructor
FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "[FragTrap] Creating unnamed FragTrap via default constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "[FragTrap] FragTrap unnamed has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Overloaded constructor
FragTrap::FragTrap(std::string Name) : ClapTrap()
{
	std::cout << "[FragTrap] Creating " << Name << " FragTrap via overloading constructor" << std::endl;
	_Name = Name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "[FragTrap] FragTrap " << _Name << " currently has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &Source) : ClapTrap(Source)
{
	if (Source._Name.empty())
		std::cout << "[FragTrap] Copy constructor called. Copying " << Source._Name << ".." << std::endl;
	else
		std::cout << "[FragTrap] Copy constructor called. Copying " << Source._Name << " into unnamed FragTrap.." << std::endl;
	*this = Source;
	return ;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)
FragTrap	&FragTrap::operator=(const FragTrap &Source)
{
	_attackDamage = Source._attackDamage;
	_energyPoints = Source._energyPoints;
	_hitPoints = Source._hitPoints;
	_Name = Source._Name;
	return *this;
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
FragTrap::~FragTrap(void)
{
	std::cout << "[FragTrap] Destructor called" << std::endl;
	return ;
}

// Member functions
void	FragTrap::attack(const std::string &target)
{
	std::cout << "[FragTrap] FragTrap " << _Name << " wants to attack " << target << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[FragTrap] FragTrap " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[FragTrap] FragTrap " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[FragTrap] FragTrap " << _Name << " currently has " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[FragTrap] FragTrap " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "[FragTrap] FragTrap " << _Name << " now has " << _energyPoints << " energy points left" << std::endl;
		return ;
	}
	return ;
}

// Member functions
void	FragTrap::highFivesGuys(void)
{
	if (_Name.empty())
		std::cout << "[FragTrap] FragTrap unnamed kindly asks any of the ClapTrap/ScavTrap/FragTrap objects for a high five" << std::endl;
	else
		std::cout << "[FragTrap] FragTrap " << _Name << " kindly asks any of the ClapTrap/ScavTrap/FragTrap objects for a high five" << std::endl;
	return ;
}
