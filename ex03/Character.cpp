/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:40 by masase            #+#    #+#             */
/*   Updated: 2025/08/14 23:59:15 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string name): _name(name)
{
	std::cout << "Character Constructor called" << std::endl;	
}

Character::Character(void):_name("Default")
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
	//delete _brain;	
}

Character::Character(const Character &obj)
{
	*this = obj;
	std::cout << "Character Copy Constructor called" << std::endl;
}

Character &Character::operator=(const Character &obj)
{
	std::cout << "Character Assignement operator called" << std::endl;
	// if (this != &obj)
	// {
	// 	this->_brain = new Brain;
	// 	*this->_brain = *(obj._brain);
	// 	this->type = obj.type;
	// }
	return (*this);
}

std::string const &Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    while (inventory[i]) // maybe put i < 4
        i++;
    if (inventory[i])  
        inventory [i] = m;
}

void Character::unequip(int idx)
{
    inventory[idx] =  NULL;
}

void Character::use(int idx, ICharacter& target)
{
    // inventory[idx].use(target);
}