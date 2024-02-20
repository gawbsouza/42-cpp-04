/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:59:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:31:58 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ): Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat( const Cat & cat ): Animal(cat)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound( void ) const
{
    std::cout << "Making cat sound" << std::endl;
}

Cat & Cat::operator=( const Cat & cat )
{
    std::cout << "Cat assign operator called" << std::endl;
    this->_type = cat._type;
    return *this;
}
