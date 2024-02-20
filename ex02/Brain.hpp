/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 06:40:11 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/13 06:48:24 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain
{
    
public:

    static const unsigned int MAX_IDEIAS = 100;

    Brain( void );
    Brain( const Brain & brain );
    ~Brain( void );

    std::string     getIdea( unsigned int index ) const;
    void            setIdeia( unsigned int index, std::string idea );
    void            fillWith( const std::string & ideia );
    
    Brain &         operator=( const Brain & brain );    

private:
    
    std::string ideias[MAX_IDEIAS];
};

#endif