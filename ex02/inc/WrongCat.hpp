/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:46:03 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 09:46:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
# define __WRONGCAT_H__

# include	"WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	protected:

	public:
		WrongCat(void);
		WrongCat(const WrongCat &copy);
		virtual ~WrongCat(void);
		WrongCat& operator=(const WrongCat &other);
		void makeSound(void) const;
};

#endif
