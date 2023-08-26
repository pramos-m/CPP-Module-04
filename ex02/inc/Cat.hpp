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

# include	"AAnimal.hpp"
# include	"Brain.hpp"

class Cat : public AAnimal
{
private:
	Brain* brain;
public:
	Cat(void);
	Cat(const Cat &copy);
	virtual ~Cat(void);
	Cat& operator=(const Cat &other);
	virtual void makeSound(void) const;
	void addIdea(std::string idea) const;
	std::string getIdea(int i) const;
};

#endif
