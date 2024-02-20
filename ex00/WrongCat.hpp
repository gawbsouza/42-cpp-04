/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:55:45 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/19 06:27:40 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

    WrongCat( void );
    WrongCat( const WrongCat & wrongCat );
    virtual ~WrongCat( void );

    void    makeSound( void ) const ;

    WrongCat &   operator=( const WrongCat & wrongCat );
};


#endif