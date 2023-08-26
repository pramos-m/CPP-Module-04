/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:45:46 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:45:48 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __AANIMAL_H__
# define __AANIMAL_H__

# include	<iostream>
# include	<string>

class AAnimal
{
	protected:
		std::string	_type;
	public:
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal( const AAnimal& animal );
		virtual ~AAnimal( void );
		AAnimal&			operator=( const AAnimal& animal );
		std::string		getType( void ) const;
		void			setType(std::string type);
		virtual void	makeSound( void ) const = 0;
};

#endif
