/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:46 by masase            #+#    #+#             */
/*   Updated: 2025/08/13 17:33:58 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :AMateria("Cure")
{
    std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure &obj): AMateria("Cure")
{
    std::cout << "Cure Copy Constructor called" << std::endl;
    *this = obj;
}

Cure::~Cure()
{
    std::cout << "Cure Destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &obj)
{
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}