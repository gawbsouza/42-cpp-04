/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:59:30 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/20 06:32:49 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ): Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    this->_brain->fillWith("Dog ideia");
}

Dog::Dog( const Dog & dog ): Animal(dog)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog::~Dog( void )
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
}

void Dog::makeSound( void ) const
{
    std::cout << "Making dog sound" << std::endl;
}

Dog & Dog::operator=( const Dog & dog )
{
    std::cout << "Dog assign operator called" << std::endl;
    if (this != &dog) {
        this->_type = dog._type;
        this->_brain = new Brain(*dog._brain);
    }
    return *this;
}
