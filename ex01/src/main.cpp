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
#include	"../inc/Brain.hpp"
#include	<iostream>
#include	<iomanip>

int main()
{
    // Crear instancias de Cat
    const Cat *a = new Cat();
    a->addIdea("Idea 1");
    a->addIdea("Idea 2");
    a->addIdea("Idea 3");

    const Cat *c = new Cat();
    c->addIdea("de la vaca");

    // Crear una copia de Cat a
    const Cat *b(a);

    // Imprimir ideas
    std::cout << "Idea from c: " << c->getIdea(0) << std::endl;
    std::cout << "Idea from a: " << a->getIdea(0) << std::endl;
    std::cout << "Idea from b: " << b->getIdea(0) << std::endl;

    // Liberar memoria de Cat a
    delete a;

    // Intentar acceder a la idea de b (¡error!)
    b->getIdea(0);

    // Imprimir idea de b (¡error!)
    std::cout << "Idea from b: " << b->getIdea(0) << std::endl;

    // Liberar memoria de Cat c
    delete c;

    return 0;
}
