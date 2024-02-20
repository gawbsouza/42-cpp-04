/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:55:45 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:56:12 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

private:

    Brain *_brain;

public:

    Cat( void );
    Cat( const Cat & cat );
    virtual ~Cat( void );

    void    makeSound( void ) const ;

    Cat &   operator=( const Cat & cat );
};


#endif