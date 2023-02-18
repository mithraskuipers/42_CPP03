/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:22:07 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 11:52:27 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/ClapTrap.hpp"
#include "./../includes/ScavTrap.hpp"

// Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "[ScavTrap] Creating unnamed ScavTrap via default constructor" << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "[ScavTrap] ScavTrap unnamed has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Overloaded constructor
ScavTrap::ScavTrap(std::string Name) : ClapTrap()
{
	std::cout << "[ScavTrap] Creating " << Name << " ScavTrap via overloading constructor" << std::endl;
	_Name = Name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "[ScavTrap] ScavTrap unnamed has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &Source) : ClapTrap(Source)
{
	if (Source._Name.empty())
		std::cout << "[ScavTrap] Copy constructor called. Copying " << Source._Name << ".." << std::endl;
	else
		std::cout << "[ScavTrap] Copy constructor called. Copying " << Source._Name << " into unnamed ScavTrap.." << std::endl;
	*this = Source;
	return ;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)

ScavTrap	&ScavTrap::operator=(const ScavTrap &Source)
{
	ClapTrap::operator=(Source);
	return (*this);
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
ScavTrap::~ScavTrap(void)
{
	std::cout << "[ScavTrap] Destructor called" << std::endl;
	return ;
}

// Member functions
void	ScavTrap::attack(const std::string &target)
{
	std::cout << "[ScavTrap] ScavTrap " << _Name << " wants to attack " << target << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[ScavTrap] ScavTrap " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[ScavTrap] ScavTrap " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[ScavTrap] ScavTrap " << _Name << " has " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[ScavTrap] ScavTrap " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "[ScavTrap] ScavTrap " << _Name << " now has " << _energyPoints << " energy points left" << std::endl;
		return ;
	}
	return ;
}

// Member functions
void	ScavTrap::guardGate(void)
{
	std::cout << "[ScavTrap] ScavTrap " << _Name << " went into Gate keeper mode" << std::endl;
	return ;
}
