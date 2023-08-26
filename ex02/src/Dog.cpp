/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:47:21 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:50:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Dog.hpp"

Dog& Dog::operator=(const Dog &other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

Dog::Dog(const Dog &copy)
{
	this->brain = copy.brain;
	this->_type = copy._type;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::Dog(void)
{
	this->_type = "Dog";
	this->brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "Bup Bup" << std::endl;
}

void Dog::addIdea(std::string idea)
{
	this->brain->addIdea(idea);
}

std::string Dog::getIdea(int i) const
{
	return this->brain->getIdea(i);
}
