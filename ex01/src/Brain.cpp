/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:38:26 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 10:49:02 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Brain.hpp"

Brain::Brain( void ): _idx( 0 )
{
	std::cout << "Brain: Default constructor called" << std::endl;
	for ( unsigned int i = 0; i < MAX_IDEAS; i++ )
		this->_ideas[ i ] = "(default idea)";
}

Brain::Brain( std::string idea ): _idx( 1 )
{
	std::cout << "Brain: Idea constructor called" << std::endl;
	this->_ideas[ 0 ] = idea;
	for ( unsigned int i = 1; i < MAX_IDEAS; i++ )
		this->_ideas[ i ] = "(default idea)";
}

Brain::Brain( const Brain& brain )
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	for ( unsigned int i = 0; i < MAX_IDEAS; i++ )
		this->_ideas[ i ] = brain._ideas[ i ];
	this->_idx = brain._idx;
}

Brain::~Brain( void )
{
	std::cout << "Brain: Destructor called" << std::endl;
}

Brain&	Brain::operator=( const Brain& brain )
{
	std::cout << "Brain: Assignation operator called" << std::endl;	
	if ( this != &brain )
	{
        for (int i = 0; i < MAX_IDEAS; i++)
        {
            this->_ideas[i] = brain._ideas[i];
            this->_idx = brain._idx;
        }
	}
	return ( *this );
}

void	Brain::b_addIdea( std::string idea )
{
	this->_ideas[this->_idx] = idea;
    if (this->_idx == (MAX_IDEAS - 1))
        this->_idx = 0;
    else   
        this->_idx = this->_idx + 1;
}

unsigned int	Brain::b_getIndex( void ) const
{
	return ( this->_idx );
}

std::string	Brain::b_getIdea( unsigned int idx ) const
{
	if ( idx >= MAX_IDEAS )
	{
		std::cerr << idx << " -> Invalid index, range must be between 0 and " << MAX_IDEAS - 1 << "." << std::endl;
		return ( "" );
	}
	return ( this->_ideas[ idx ] );
}

std::string	Brain::b_getCurrentIdea( void ) const
{
	return ( this->_ideas[ this->_idx ] );
}

std::ostream&	operator<<( std::ostream& out, Brain& brain )
{
	for ( int i = 0; i < MAX_IDEAS; i++ )
		out << "Idea " << i << ": " << brain.b_getIdea( i );
	return ( out );
}

std::ostream&	operator<<( std::ostream& out, Brain* brain )
{
	if ( brain != NULL )
	{
		for ( int i = 0; i < MAX_IDEAS; i++ )
		{
			out << "Idea " << i << ": " << brain->b_getIdea( i );
            if (i + 1 < MAX_IDEAS)
                out << " | ";
		}
	}
	return ( out );
}