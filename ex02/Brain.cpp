/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:46:23 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:51:51 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain( void )
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain & brain )
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = brain;
}

Brain::~Brain( void )
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea( unsigned int index ) const
{
    if (index < MAX_IDEIAS) {
        return this->ideias[index];
    }
    std::cout << "Brain invalid get index: " << index << std::endl;
    return "";
}

void Brain::setIdeia( unsigned int index, std::string idea )
{
    if (index < MAX_IDEIAS) {
        this->ideias[index] = idea;
    }
    std::cout << "Brain invalid set index: " << index << std::endl;
}

void Brain::fillWith( const std::string & ideia )
{
    for (unsigned int i = 0; i < MAX_IDEIAS; i++) {
           this->ideias[i] = ideia;
    }
}
 
Brain & Brain::operator=( const Brain & brain )
{
    if (this == &brain) {
        for (unsigned int i = 0; i < MAX_IDEIAS; i++) {
            this->ideias[i] = brain.getIdea(i);
        }
    }

    return *this;
}   
