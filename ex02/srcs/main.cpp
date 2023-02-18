/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 15:03:46 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//	Orthodox Canonical Form is also known as Orthodox Canonical Class Form.
//	It means you classes need to have a default constructor, copy constructor
//	destructor, and copy assignment operator.
//	- default constructor: used internally to initialize objects and data members
//	when no other value is available.
//	- copy constructor: a copy constructor is a member function that initializes
//	an object using another object of the same class
//	- assignment operator: used to assign one value to another.
//	- destructor: invoked when an object is deleted.

#include "./../includes/ClapTrap.hpp"
#include "./../includes/ScavTrap.hpp"
#include "./../includes/FragTrap.hpp"

int	main(void)
{
	//ClapTrap a("Mithras");
	//ScavTrap b("George");
	FragTrap c("George");
	//a.attack("George");
	//b.guardGate();
	c.highFivesGuys();
	return (0);
}
