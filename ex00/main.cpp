/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:05:43 by glions            #+#    #+#             */
/*   Updated: 2025/01/13 13:24:17 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <limits>

int main(int ac, char **av)
{
	std::string str;
	if (ac != 2)
	{
		std::cerr << "Usage: ./convert [value]" << std::endl;
		return (1);
	}
	str = av[1];
	std::cout << std::fixed << std::setprecision(4);
	ScalarConverter::convert(str);
	std::cout << 123456789.123456f << std::endl;
	std::cout << static_cast<float>(123456789.123456) << std::endl;
	std::cout << std::numeric_limits<float>::max();
	return (0);
}
