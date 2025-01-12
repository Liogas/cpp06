/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 04:46:47 by glions            #+#    #+#             */
/*   Updated: 2025/01/12 19:02:00 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data *data = new Data;
	data->s1 = "Hello";
	data->s2 = "World";
	data->n = 42;

	uintptr_t raw = Serializer::serialize(data);
	std::cout << "raw : " << raw << std::endl;

	Data *data2 = Serializer::deserialize(raw);
	std::cout << data2->s1 << std::endl;
	std::cout << data2->s2 << std::endl;
	std::cout << data2->n << std::endl;

	delete data;
	return (0);
}
