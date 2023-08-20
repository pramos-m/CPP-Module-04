/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:51:57 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:52:00 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
# define __CAT_H__

# include	"Animal.hpp"
# include	"Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*_brain;
	public:
		Cat( void );
		Cat( const Cat& cat );
		~Cat( void );
		Cat&			operator=( const Cat& cat );
		void			makeSound( void ) const;
		void			addIdea( std::string idea );
		std::string		getIdea( unsigned int idx ) const;
		std::string		getCurrentIdea( void ) const;
		unsigned int	getIndex( void ) const;
		void			printBrain( std::ostream& out ) const;
};

std::ostream&	operator<<( std::ostream& out, const Cat& cat );
std::ostream&	operator<<( std::ostream& out, const Cat* cat );

#endif
