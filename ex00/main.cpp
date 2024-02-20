/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasouza <gasouza@student.42sp.org.br >     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 05:48:47 by gasouza           #+#    #+#             */
/*   Updated: 2024/02/20 07:05:51 by gasouza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

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
    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete meta;
    delete j;
    delete i;
}

void wrongClassesTests()
{
    testTitle("Wrong Classes Tests");

    const WrongAnimal* c = new WrongCat();

    std::cout << std::endl;
    
    std::cout << c->getType() << " " << std::endl;
    c->makeSound();

    std::cout << std::endl;

    delete c;
}

void extraTests()
{
    testTitle("Extra Tests");

    const Animal *a = new Cat();
    Cat b;
    const Dog *c = new Dog();
    const Dog *d = new Dog(*c);
    Dog e = *d;

    std::cout << std::endl;

    std::cout << a->getType() << " " << std::endl;
    std::cout << b.getType() << " " << std::endl;
    std::cout << c->getType() << " " << std::endl;
    std::cout << d->getType() << " " << std::endl;
    std::cout << e.getType() << " " << std::endl;
    
    std::cout << std::endl;

    delete a;
    delete c;
    delete d;
}

int main()
{
    subjectTests();
    wrongClassesTests();
    extraTests();
    
    return 0;
}