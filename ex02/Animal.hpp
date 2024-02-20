/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:38:54 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 07:17:42 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal
{
    
protected:
    
    std::string _type;
    
public:

    Animal( void );
    Animal ( const Animal & animal );
    virtual ~Animal( void );
    
    std::string     getType( void ) const;

    virtual void    makeSound( void ) const = 0 ;
    
    Animal &        operator=( const Animal & animal );
};


#endif