/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:08:01 by maw               #+#    #+#             */
/*   Updated: 2025/08/07 18:22:39 by maw              ###   ########.fr       */
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
		Animal();
		~Animal();
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
};

#endif