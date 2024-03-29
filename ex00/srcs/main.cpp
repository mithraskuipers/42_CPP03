/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:22:17 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 15:33:47 by mikuiper      ########   odam.nl         */
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

int main(void)
{
	ClapTrap Mithras("Mithras");
	ClapTrap Bas("Bas");
	ClapTrap NepBas(Bas);
	Mithras.attack("Bas");
	Bas.takeDamage(0);
	Bas.beRepaired(100);
	Bas.beRepaired(100);
	return 0;
}
