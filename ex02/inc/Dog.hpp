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

#include	"AAnimal.hpp"
#include 	"Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain* brain;
	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual ~Dog(void);
		Dog& operator=(const Dog &other);
		virtual void makeSound(void) const;
		void	addIdea(std::string idea);
		std::string getIdea(int i) const;
};

#endif
