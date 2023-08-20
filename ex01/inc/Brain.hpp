/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:51:53 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:51:55 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
# define __BRAIN_H__

# include	<string>
# include	<iostream>

# define MAX_IDEAS	100

class Brain
{
	private:
		std::string		_ideas[ MAX_IDEAS ];
		unsigned int	_idx;
	public:
		Brain( void );
		Brain( std::string idea );
		Brain( const Brain& brain );
		~Brain( void );
		Brain&			operator=( const Brain& brain );
		void			b_addIdea( std::string idea );
		std::string		b_getIdea( unsigned int idx ) const;
		std::string		b_getCurrentIdea( void ) const;
		unsigned int	b_getIndex( void ) const;
};

std::ostream&	operator<<( std::ostream& out, Brain& brain );
std::ostream&	operator<<( std::ostream& out, Brain* brain );

#endif
