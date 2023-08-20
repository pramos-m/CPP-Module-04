/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:52:03 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:52:05 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
# define __DOG_H__

# include	"Animal.hpp"
# include	"Brain.hpp"

class Dog: public Animal
{
	private:
		Brain	*_brain;
	public:
		Dog( void );
		Dog( const Dog& dog );
		~Dog( void );
		Dog&			operator=( const Dog& dog );
		void			makeSound( void ) const;
		void			addIdea( std::string idea );
		std::string		getIdea( unsigned int idx ) const;
		std::string		getCurrentIdea( void ) const;
		unsigned int	getIndex( void ) const;
		void			printBrain( std::ostream& out ) const;
};

std::ostream&	operator<<( std::ostream& out, const Dog& dog );
std::ostream&	operator<<( std::ostream& out, const Dog* dog );

#endif
