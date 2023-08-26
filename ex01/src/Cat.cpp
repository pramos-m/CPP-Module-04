/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:46:57 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:50:01 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Cat.hpp"

Cat& Cat::operator=(const Cat &other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	std::cout << "Cat: Copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

Cat::Cat(const Cat &copy)
{
	this->brain = copy.brain;
	this->_type = copy._type;
	std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat::Cat(void)
{
	this->_type = "Cat";
	this->brain = new Brain();
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat: Default destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

void Cat::addIdea(std::string idea) const
{
	this->brain->addIdea(idea);
}

std::string Cat::getIdea(int i) const
{
	return this->brain->getIdea(i);
}
