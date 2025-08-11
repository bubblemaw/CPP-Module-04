/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masase <masase@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 10:42:22 by masase            #+#    #+#             */
/*   Updated: 2025/08/10 11:45:53 by masase           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>
# include <ostream>
# include <string>

class Brain
{
    protected:
        std::string ideas[100];
    public:
		Brain();
		~Brain();
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);    
    
};

#endif