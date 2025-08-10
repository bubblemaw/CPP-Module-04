/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:42:18 by masase            #+#    #+#             */
/*   Updated: 2025/08/10 12:42:57 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	*this = obj;
	std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain Assignement operator called" << std::endl;
	if (this != &obj)
	{
        int i = 0;
        while(i < 100)
        {
            this->ideas[i] = obj.ideas[i];
            i++;
        }
	}
	return (*this);
}
