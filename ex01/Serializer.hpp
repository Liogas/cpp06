/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 20:51:00 by glions            #+#    #+#             */
/*   Updated: 2025/01/12 18:32:41 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP	

# include "Data.hpp"
# include <stdint.h>

class Serializer
{
	private:
		Serializer(void);
		~Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &copy);
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif