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

Dog::Dog( void ): Animal( "Dog" )
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog( const Dog& dog ): Animal( dog )
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Dog: Destructor called" << std::endl;
}

Dog&	Dog::operator=( const Dog& dog )
{
	std::cout << "Dog: Assignation operator called" << std::endl;
	this->_type = dog._type;
	return ( *this );
}

void	Dog::makeSound( void ) const
{
	std::cout << "Woof Woof" << std::endl;
}
