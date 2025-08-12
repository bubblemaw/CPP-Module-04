/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:11:09 by masase            #+#    #+#             */
/*   Updated: 2025/08/12 15:00:05 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :_type(type)
{
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &obj): AMateria(obj._type)
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
    if (this != &obj)
    {
        this->_type = obj._type;
    }
    return (*this);
}