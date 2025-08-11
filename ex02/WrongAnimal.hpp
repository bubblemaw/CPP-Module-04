/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:21:25 by masase            #+#    #+#             */
/*   Updated: 2025/08/11 15:57:12 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <ostream>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal(std::string name);
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal &operator=(const WrongAnimal &obj);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif