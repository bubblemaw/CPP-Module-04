/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:19:48 by maw               #+#    #+#             */
/*   Updated: 2025/08/10 12:45:10 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat")
{
	std::cout << "Cat Constructor called" << std::endl;
	_brain = new Brain();
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &obj)
{
	*this = obj;
	std::cout << "Cat Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat Assignement operator called" << std::endl;
	if (this != &obj)
	{
		this->_brain = new Brain;
		*this->_brain = *(obj._brain);
		this->type = obj.type;
	}
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "MEOWWWWWWWWWW RHHH MEOWWWWWWWWW GRRR" << std::endl;
}