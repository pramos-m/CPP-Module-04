/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:47:55 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:48:02 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal( "WrongCat" )
{
	std::cout << "WrongCat: Default constructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& wrongCat ): WrongAnimal( wrongCat )
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;	
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=( const WrongCat& wrongCat )
{
	std::cout << "WrongCat: Assignation operator called" << std::endl;
	this->_type = wrongCat._type;
	return ( *this );
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "Meeeeoooww" << std::endl;
}