/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/30 08:18:20 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/16 14:12:26 by mikuiper      ########   odam.nl         */
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
	ClapTrap a("Mithras"); 	// This calls the constructor
	ClapTrap b;
	//ClapTrap b(a);	// This calls the copy constructor, copy assignment operator, and getRawBits().
	//ClapTrap c; 	// This calls the constructor

	//c = b;		// This calls the copy assignment operator and getRawBits method
	return 0;
}
