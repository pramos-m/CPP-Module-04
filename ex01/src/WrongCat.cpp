/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:47:55 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:50:09 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/WrongCat.hpp"

WrongCat& WrongCat::operator=(const WrongCat &other)
{
	std::cout << "WrongCat: Copy assignment operator called" << std::endl;
	this->_type = other._type;
	return *this;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	this->_type = copy._type;
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}

WrongCat::WrongCat(void)
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: Default destructor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "WrongMeow" << std::endl;
}
