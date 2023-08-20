/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:51:49 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:51:51 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include	<iostream>
# include	<string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal( void );
		Animal( std::string type );
		Animal( const Animal& animal );
		virtual ~Animal( void );
		Animal&			operator=( const Animal& animal );
		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

std::ostream&	operator<<( std::ostream& out, const Animal& animal );
std::ostream&	operator<<( std::ostream& out, const Animal* animal );

#endif
