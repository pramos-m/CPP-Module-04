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

Cat::Cat( void ): Animal( "Cat" )
{
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat( const Cat& cat ): Animal( cat )
{
	std::cout << "Cat: Copy constructor called" << std::endl;	
}

Cat::~Cat( void )
{
	std::cout << "Cat: Destructor called" << std::endl;
}

Cat&	Cat::operator=( const Cat& cat )
{
	std::cout << "Cat: Assignation operator called" << std::endl;
	this->_type = cat._type;
	return ( *this );
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeoooww" << std::endl;
}
