/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:05:43 by glions            #+#    #+#             */
/*   Updated: 2025/01/10 16:32:48 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	std::string str;
	if (ac != 2)
	{
		std::cerr << "Usage: ./convert [value]" << std::endl;
		return (1);
	}
	str = av[1];
	ScalarConverter::convert(str);
	return (0);
}
