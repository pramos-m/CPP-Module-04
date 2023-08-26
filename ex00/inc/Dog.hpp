/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:45:55 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:45:57 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __DOG_H__
# define __DOG_H__

# include	"Animal.hpp"

class Dog : public Animal
{
	protected:

	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual ~Dog(void);
		Dog& operator=(const Dog &other);
		virtual void makeSound(void) const;
};

#endif
