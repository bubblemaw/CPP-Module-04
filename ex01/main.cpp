/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:06:04 by maw               #+#    #+#             */
/*   Updated: 2025/08/18 14:13:54 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

// int main()
// {
//     Dog Bro;
//     Dog BIGG(Bro);

//     std::cout << "Brain Pointers Memory Adress: " << Bro.GetPtr() << std::endl;   
//     std::cout << "Brain Pointers Memory Adress: " << BIGG.GetPtr() << std::endl;
//     std::cout << std::endl;
//     return (0);
// }

int main()
{
    Animal *SPA[4];
    
    int i = 0;
    while (i < 4)
    {
        if (i < 2)
            SPA[i] = new Dog();
        else
            SPA[i] = new Cat(); 
        i++;           
    }
    std::cout << "CHARGEEEEERRRRR" << std::endl;
    i = 0;
    while (i < 4)
    {
        delete SPA[i];
        i++;
    }
    
}


// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
    
//     delete j;//should not create a leak
//     delete i;

//     return 0;
// }

