/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:33:13 by glions            #+#    #+#             */
/*   Updated: 2025/01/12 18:31:04 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(void) {}
Serializer::~Serializer() {}
Serializer::Serializer(Serializer const &copy)
{
	*this = copy;
}
Serializer &Serializer::operator=(Serializer const &copy)
{
	(void)copy;
	return (*this);
}

uintptr_t Serializer::serialize(Data *ptr)
{
	uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
	return (reinterpret_cast<uintptr_t>(raw));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}