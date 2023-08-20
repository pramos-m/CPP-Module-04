/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pramos-m <pramos-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:26:51 by pramos-m          #+#    #+#             */
/*   Updated: 2023/08/20 10:27:21 by pramos-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Animal.hpp"
#include	"Cat.hpp"
#include	"Dog.hpp"
#include	"WrongAnimal.hpp"
#include	"WrongCat.hpp"
#include	<iostream>
#include	<iomanip>

#define FILL		40
#define C_DEFAULT	"\033[0m"
#define C_RED		"\033[1;91m"
#define C_GREEN		"\033[1;92m"
#define C_YELLOW	"\033[1;93m"
#define C_BLUE		"\033[1;94m"
#define C_PINK		"\033[1;95m"
#define C_CYAN		"\033[1;96m"
#define C_WHITE		"\033[1;97m"
#define C_PURPLE	"\033[1;38;2;150;25;250m"

void    print_title( std::string msg, std::string clr_text, std::string clr_border )
{
	int	fill;
	int	odd;
	int	size;

	size = msg.length() >= FILL ? msg.length() + 10 : FILL;
	fill = ( size - msg.length() ) / 2;
	odd = msg.length() < FILL ? msg.length() % 2 : 0;
	std::cout << clr_border;
	std::cout << "\n " << std::setfill( '_' ) << std::setw( size ) << "" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( fill + odd ) << "" << clr_text << msg << clr_border << std::setw( fill + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( ' ' ) << std::setw( size + 1 ) << "|" << std::endl;
	std::cout << "|" << std::setfill( '_' ) << std::setw( size + 2 ) << "|\n" << std::endl;
	std::cout << C_DEFAULT;
}

void	test_WrongAnimal( void )
{
	print_title( "Constructors", C_GREEN, C_YELLOW );
}

void	test_Animal( void )
{
	print_title( "Constructors", C_GREEN, C_YELLOW );
}

int	main( void )
{
	print_title( "Test: Animal", C_BLUE, C_YELLOW );
	test_Animal();
	print_title( "Test: WrongAnimal", C_BLUE, C_YELLOW );
	test_WrongAnimal();
	return ( 0 );
}