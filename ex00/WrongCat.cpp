/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:59:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/19 06:33:31 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ): WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat & wrongCat ): WrongAnimal(wrongCat)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wrongCat;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound( void ) const
{
    std::cout << "Making WrongCat sound" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat & wrongCat )
{
    std::cout << "WrongCat assign operator called" << std::endl;
    this->_type = wrongCat._type;
    return *this;
}
