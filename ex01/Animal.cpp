/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:43:07 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:30:46 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

// Constructors

Animal::Animal( void ): _type("Unknown")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal ( const Animal & animal )
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor called" << std::endl;
}

// Methods

std::string Animal::getType( void ) const
{
    return this->_type;
}

void Animal::makeSound( void ) const
{
    std::cout << "Making unknown sound" << std::endl;
}

Animal & Animal::operator=( const Animal & animal )
{
    std::cout << "Animal assign operator called" << std::endl;
    this->_type = animal._type;
    return *this;
}