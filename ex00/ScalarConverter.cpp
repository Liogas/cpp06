/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glions <glions@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:01:32 by glions            #+#    #+#             */
/*   Updated: 2025/01/13 13:18:03 by glions           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::~ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {
	*this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {
	(void)other;
	return (*this);
}

void ScalarConverter::convert(const std::string &literal) {

	for(int i = 0; (size_t)i < literal.length(); i++)
	{
		if (!std::isdigit(literal[i]) && literal[i] != '.' && literal[i] != 'f')
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			if (literal == "nan" || literal == "nanf")
				std::cout << "float: nanf" << std::endl;
			else if (literal == "-inf" || literal == "+inf"
				|| literal == "-inff" || literal == "+inff")
				std::cout << "float: " << literal[0] << "inff" << std::endl;
			else
				std::cout << "float: impossible" << std::endl;
			if (literal == "nan" || literal == "nanf")
				std::cout << "double: nan" << std::endl;
			else if (literal == "-inf" || literal == "+inf"
				|| literal == "-inff" || literal == "+inff")
				std::cout << "double: " << literal[0] << "inf" << std::endl;
			else
				std::cout << "double: impossible" << std::endl;
			return ;
		}
	}
	// CHAR
	try {
	 	char c = static_cast<char>(std::atoi(literal.c_str()));
		if (std::isprint(c))
			std::cout << "char: '" << c << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	} catch (std::exception &e) {
		std::cout << "char: impossible" << std::endl;
	}
    // INT
    try {
        int i = std::atoi(literal.c_str());
        std::cout << "int: " << i << std::endl;
    } catch (std::exception &e) {
        std::cout << "int: impossible" << std::endl;
    }
    // FLOAT
    try {
        float f = std::atof(literal.c_str());
        std::cout << "float: " << f << "f" << std::endl;
    } catch (std::exception &e) {
        std::cout << "float: impossible" << std::endl;
    }
    // DOUBLE
    try {
        double d = std::atof(literal.c_str());
        std::cout << "double: " << d << std::endl;
    } catch (std::exception &e) {
        std::cout << "double: impossible" << std::endl;
    }
}
