/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:52:08 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:52:10 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

# include	<iostream>
# include	<string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal( const WrongAnimal& wrongAnimal );
		~WrongAnimal( void );
		WrongAnimal&	operator=( const WrongAnimal& wrongAnimal );
		std::string		getType( void ) const;
		void			makeSound( void ) const;
};

std::ostream&	operator<<( std::ostream& out, const WrongAnimal& wrongAnimal );
std::ostream&	operator<<( std::ostream& out, const WrongAnimal* wrongAnimal );

#endif
