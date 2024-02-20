/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:46:23 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/19 07:21:46 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <sstream>

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
        std::ostringstream ss;
        ss << ideia << " " << i;
        this->ideias[i] = ss.str();
    }
}
 
Brain & Brain::operator=( const Brain & brain )
{
    std::cout << "Brain assign operator called" << std::endl;
    if (this != &brain) {
        std::cout << "Brain ideas copied" << std::endl;
        for (unsigned int i = 0; i < MAX_IDEIAS; i++) {
            this->ideias[i] = brain.getIdea(i);
        }
    }

    return *this;
}   
