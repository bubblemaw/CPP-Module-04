/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:08:01 by maw               #+#    #+#             */
/*   Updated: 2025/08/11 15:58:22 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <ostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(std::string name);
		Animal();
		virtual ~Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif