/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:47:21 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 08:50:06 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
		int size;
	public:
		Brain(void);
		~Brain(void);
		Brain& operator=(const Brain &copy);
		Brain(const Brain &copy);
		int getSize(void) const;
		void addIdea(std::string idea);
	std::string getIdea(int i) const;
};

#endif
