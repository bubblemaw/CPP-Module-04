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
    int i = 0;
    while (i < 4)
    {
        this->inventory[i] = NULL;
        i++;
    }
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
    std::cout << "MateriaSource Copy Constructor called" << std::endl;
    *this = obj;
}

MateriaSource::~MateriaSource()
{
    std::cout << "MateriaSource Destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete inventory[i];
		i++;
	}    
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj)
{
    std::cout << "MateriaSource Assignement operator called" << std::endl;
	if (this == &obj)
		return (*this);
	int i = 0;	
	while (i < 4)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (obj.inventory[i])
			this->inventory[i] = obj.inventory[i];
		else
			this->inventory[i] = NULL;
		i++;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;
    while (inventory[i]) // maybe put i < 4
        i++;
    if (!inventory[i])  
        inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4)
    {
        if (inventory[i]->getType() == type)      
            return (inventory[i]->clone());
        i++;
        std::cout << "ca tourne" << std::endl;
    } 
    return (NULL);
}