/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:26:10 by masase            #+#    #+#             */
/*   Updated: 2025/08/11 16:26:11 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() 
{
    std::cout << "MateriaSource Constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    std::cout << "MateriaSource Copy Constructor called" << std::endl;
    *this = obj;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource Assignement operator called" << std::endl;
    // 	if (this != &obj)
	// {
	// 	this->inventory = new AMateria;
	// 	*this->_brain = *(obj._brain);
	// 	this->type = obj.type;
	// }
    // if (this != &obj)
    // {
    //     this->inventory = obj.inventory;
    // }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (inventory[i]) // maybe put i < 4
        i++;
    if (inventory[i])  
        inventory [i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (inventory[i]) // maybe put i < 4
    {
        if (inventory [i]->getType() == type)  
            return (inventory[i]);
    } 
    return (0);
}