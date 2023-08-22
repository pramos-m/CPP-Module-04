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

WrongAnimal::WrongAnimal( void ): _type ("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ): _type(type)
{
	std::cout << "WrongAnimal: Type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& wrongAnimal ): _type(wrongAnimal._type)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}

std::string	WrongAnimal::getType( void ) const
{
	return ( this->_type );
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << "(wrongAnimal sound)" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& wrongAnimal )
{
   	std::cout << "WrongAnimal: Assignation operator called" << std::endl;
    this->_type = wrongAnimal._type;
    return (*this);
}

std::ostream&	operator<<( std::ostream& out, const WrongAnimal& wrongAnimal )
{
    out << "Type: " << wrongAnimal.getType();
    return (out);
}

std::ostream&	operator<<( std::ostream& out, const WrongAnimal* wrongAnimal )
{
    if (wrongAnimal != NULL)
        out << "Type: " << wrongAnimal->getType();
    return (out);
}
