/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:48:39 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:49:49 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/AAnimal.hpp"

AAnimal& AAnimal::operator=(const AAnimal &other)
{
	std::cout << "AAnimal: Copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

AAnimal::AAnimal(const AAnimal &copy): _type(copy._type)
{
	 std::cout << "AAnimal: Copy constructor called" << std::endl;
}

AAnimal::AAnimal(void) : _type("Non")
{
	std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal: Default destructor called" << std::endl;
}

void AAnimal::makeSound(void) const
{
	std::cout << "AAnimal: Default sound" << std::endl;
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string AAnimal::getType(void) const
{
	return this->_type;
}
