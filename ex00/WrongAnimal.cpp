/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:43:07 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/19 06:31:43 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

// Constructors

WrongAnimal::WrongAnimal( void ): _type("WrongAnimal Unknown")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal ( const WrongAnimal & wrongAnimal )
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wrongAnimal;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

// Methods

std::string WrongAnimal::getType( void ) const
{
    return this->_type;
}

void WrongAnimal::makeSound( void ) const
{
    std::cout << "Making WrongAnimal unknown sound" << std::endl;
}

WrongAnimal & WrongAnimal::operator=( const WrongAnimal & wrongAnimal )
{
    std::cout << "WrongAnimal assign operator called" << std::endl;
    this->_type = wrongAnimal._type;
    return *this;
}