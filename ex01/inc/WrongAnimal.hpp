/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:45:59 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:46:01 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

# include	<iostream>
# include	<string>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal(void);
		WrongAnimal& operator=(const WrongAnimal &other);
		void makeSound(void) const;
		void setType(std::string newtype);
		std::string getType(void) const;
};

#endif
