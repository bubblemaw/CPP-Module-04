/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:51 by masase            #+#    #+#             */
/*   Updated: 2025/08/14 13:09:21 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :AMateria("Ice")
{
    std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice &obj): AMateria("Ice")
{
    std::cout << "Ice Copy Constructor called" << std::endl;
    *this = obj;
}

Ice::~Ice()
{
    std::cout << "Ice Destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &obj)
{
    std::cout << "Ice Assignement operator called" << std::endl;
    if (this != &obj)
    {
        type = obj.type;
    }
    return (*this);
}