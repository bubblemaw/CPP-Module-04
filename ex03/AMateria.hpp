/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:11:06 by masase            #+#    #+#             */
/*   Updated: 2025/08/12 14:48:02 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <ostream>
# include <iostream>

class AMateria
{
    protected:
        std::string const & _type;
    public:
        AMateria(std::string const & type);
        ~AMateria();
        AMateria(const AMateria &obj);
        AMateria &operator=(const AMateria &obj);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif