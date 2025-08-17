/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:40 by masase            #+#    #+#             */
/*   Updated: 2025/08/17 18:25:44 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "Character Constructor called" << std::endl;	
	int i = 0;	
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
	i = 0;
	while(i < 100)
	{
		trash[i] = NULL;
		i++;
	}	
}

Character::Character(void):_name("Default")
{
	std::cout << "Character Constructor called" << std::endl;
	int i = 0;
	while(i < 4)
	{
		inventory[i] = NULL;
		i++;
	}
	i = 0;
	while(i < 100)
	{
		trash[i] = NULL;
		i++;
	}
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
	int i = 0;
	while (i < 4)
	{
		delete inventory[i];
		i++;
	}
	i = 0;
	while (i < 100)
	{
		delete trash[i];
		i++;
	}
}

Character::Character(const Character &obj)
{
	std::cout << "Character Copy Constructor called" << std::endl;	
	*this = obj;
}

Character &Character::operator=(const Character &obj)
{
	std::cout << "Character Assignement operator called" << std::endl;
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
	this->_name = obj._name;
	return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (i < 4)
	{
		if (inventory[i] == m)
		{
			std::cout << "This exact Materia has already been equip" << std::endl;
			return ;
		}		
		i++;
	}
	i = 0;
    while (inventory[i] && i < 4)
        i++;		
	int j = 0;
	while (trash[j])
	{	
		if (m == trash[j])
		{
			if(!inventory[i])
			{
				inventory[i] = trash[j];
				trash[j] = NULL;
				return ;
			}
		}
		j++;
	}
    if (!inventory[i])  
        inventory[i] = m;
}

void Character::unequip(int idx)
{
	int i = 0;
	while (trash[i])
		i++;
	if (i > 99)
	{
		std::cout << _name << "You're trash is full you can't unequip anymore" << std::endl;
		return;
	}
	if (!trash[i])
		trash[i] = inventory[idx];
    inventory[idx] =  NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return;
	if (inventory[idx])
    	inventory[idx]->use(target);
}