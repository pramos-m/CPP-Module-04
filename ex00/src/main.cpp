/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:26:51 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/22 09:16:54 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../inc/Animal.hpp"
#include	"../inc/Cat.hpp"
#include	"../inc/Dog.hpp"
#include	"../inc/WrongAnimal.hpp"
#include	"../inc/WrongCat.hpp"
#include	<iostream>
#include	<iomanip>

int		main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	// Printing types of Dog and Cat instances
	std::cout << "Dog: " << j->getType() << " | Cat: " << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	// Calling makeSound() on base class Animal instance
	meta->makeSound();
	// Deleting dynamically allocated instances
	delete meta;
	delete j;
	delete i;

	// Creating instance of derived class WrongCat
	const WrongAnimal* a = new WrongCat();
	// Printing type of WrongCat instance
	std::cout << "WrongCat: " << a->getType() << std::endl;
	// Calling makeSound() on WrongCat instance
	a->makeSound();
	// Creating instance of WrongCat using default constructor
	WrongCat b;
	// Printing type of b
	std::cout << "WrongCat b: " << b.getType() << std::endl;
	// Calling makeSound() on WrongCat instance b
	b.makeSound();
	delete a;

	return (0);
}

// int	main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); 
// 	j->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete j;
// 	delete i;

// 	const WrongAnimal* a = new WrongCat();
// 	std::cout << a->getType() << " " << std::endl;
// 	a->makeSound();
// 	WrongCat b;
// 	std::cout << b.getType() << " " << std::endl;
// 	b.makeSound();
// 	delete a;
// 	return (0);
// }
