/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:48:39 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:49:49 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Animal.hpp"

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal: Copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

Animal::Animal(const Animal &copy): _type(copy._type)
{
	 std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal::Animal(void) : _type("Non")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: Default destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "Animal: Default sound" << std::endl;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType(void) const
{
	return this->_type;
}
