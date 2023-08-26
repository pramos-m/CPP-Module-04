/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:48:49 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:50:15 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/WrongAnimal.hpp"

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy): _type(copy._type)
{
	 std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(void) : _type("Non")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: Default destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal: Default sound" << std::endl;
}

void WrongAnimal::setType(std::string new_type)
{
	this->_type = new_type;
}

std::string WrongAnimal::getType(void) const
{
	return this->_type;
}
