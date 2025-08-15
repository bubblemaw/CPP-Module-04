/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maw <maw@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:25:43 by masase            #+#    #+#             */
/*   Updated: 2025/08/15 00:09:36 by maw              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *inventory[4];
		AMateria *trash;
	public:
		Character(std::string name);
		Character();
		~Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif