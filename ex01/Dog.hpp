/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:55:45 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:55:45 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

private:

    Brain *_brain;

public:

    Dog( void );
    Dog( const Dog & dog );
    virtual ~Dog( void );

    void    makeSound( void ) const;

    Dog &   operator=( const Dog & dog );
};


#endif