/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:48:47 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/20 07:03:57 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

void testTitle(std::string title)
{
    std::cout 
        << std::endl << " === " << title  
        << " === " << std::endl << std::endl;
}

void subjectTests()
{
    testTitle("Subject Tests");

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;

    delete j;//should not create a leak
    delete i;
}

void mandatoryTests()
{
    testTitle("Mandatory Tests");
    
    const Animal *animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };

    std::cout << std::endl;

    delete animals[0];
    delete animals[1];
    delete animals[2];
    delete animals[3];
}

int main()
{
    subjectTests();
    mandatoryTests();

    return 0;
}