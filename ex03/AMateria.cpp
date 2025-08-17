/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:11:09 by masase            #+#    #+#             */
/*   Updated: 2025/08/17 15:10:48 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() :type("Default Materia")
{
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) :type(type)
{
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj)
{
    std::cout << "AMateria Copy Constructor called" << std::endl;
    *this = obj;
}

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj)
{
    std::cout << "AMateria Assignement operator called" << std::endl;    
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "Default Materia USE" << std::endl;
}

std::string const & AMateria::getType() const
{
    return(type);
}
