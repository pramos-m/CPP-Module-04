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

int main()
{
    // Creación de instancias de las clases base y derivadas
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    // Imprimir los tipos de los animales
    std::cout << "Type of j: " << j->getType() << " " << std::endl;
    std::cout << "Type of i: " << i->getType() << " " << std::endl;

    // Imprimir los sonidos
    std::cout << "i->makeSound(): ";
    i->makeSound();    
    std::cout << "j->makeSound(): ";
    j->makeSound();
    std::cout << "meta->makeSound(): ";
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    // Creación de instancias de las clases base y derivadas de WrongAnimal y WrongCata
    const WrongAnimal* a = new WrongCat(); 

	// Imprimir el tipo de WrongCat
    std::cout << "Type of a: " << a->getType() << " " << std::endl;
    // Imprimir Sonido de WrongCat (¡error!)
    std::cout << "a->makeSound(): ";
    a->makeSound();

    WrongCat b;
    std::cout << "Type of b: " << b.getType() << " " << std::endl;
    b.makeSound();

    delete a;
    return 0;
}
