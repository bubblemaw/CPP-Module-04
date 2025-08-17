/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:46 by masase            #+#    #+#             */
/*   Updated: 2025/08/17 18:20:45 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :AMateria("cure")
{
    std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure &obj): AMateria("cure")
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
    std::cout << "Cure Assignement operator called" << std::endl;    
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}