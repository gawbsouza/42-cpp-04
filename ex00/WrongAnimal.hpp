/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:38:54 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/19 06:40:50 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <string>

class WrongAnimal
{
    
protected:
    
    std::string _type;
    
public:

    WrongAnimal( void );
    WrongAnimal ( const WrongAnimal & wrongAnimal );
    virtual ~WrongAnimal( void );
    
    std::string     getType( void ) const;

    void            makeSound( void ) const ;
    
    WrongAnimal &   operator=( const WrongAnimal & wrongAnimal );
};


#endif