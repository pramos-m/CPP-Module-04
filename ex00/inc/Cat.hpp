/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:45:51 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:45:53 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __CAT_H__
# define __CAT_H__

# include	"Animal.hpp"

class Cat: public Animal
{
	public:
		Cat( void );
		Cat( const Cat& cat );
		~Cat( void );
		Cat&	operator=( const Cat& cat );
		void	makeSound( void ) const;
};

#endif
