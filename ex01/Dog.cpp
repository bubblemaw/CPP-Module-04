/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:22:01 by maw               #+#    #+#             */
/*   Updated: 2025/08/11 12:38:34 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
	_brain = new Brain();
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
	delete _brain;	
}

Dog::Dog(const Dog &obj)
{
	*this = obj;
	std::cout << "Dog Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog Assignement operator called" << std::endl;
	if (this != &obj)
	{
		this->_brain = new Brain;
		*this->_brain = *(obj._brain);
		this->type = obj.type;
	}
	return (*this);
}

Brain *Dog::GetPtr()
{
	return (_brain);
}

void Dog::makeSound(void) const
{
	std::cout << "GRRRRRR WOUFFFF WOUFFFFF GRRRRRRRR" << std::endl;
}