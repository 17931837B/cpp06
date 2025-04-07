#include "ScalarConverter.hpp"

void	outputChar(char char_)
{
	std::cout << "char: " << "'" << char_ << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(char_) << std::endl;
	std::cout << "float: " << static_cast<float>(char_) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(char_) << ".0" << std::endl;
}

void	outputInt(const std::string& str, int& flagInt)
{
	long	l = std::atol(str.c_str());

	std::cout << "char: ";
	if (l < 0 || l > 127)
		std::cout << "impossible" << std::endl;
	else
	{
		if (isprint(l))
			std::cout << "'" << static_cast<char>(l) << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	std::cout << "int: ";
	if (flagInt == 2)
		std::cout << "impossible" << std::endl;
	else
		std::cout	<< static_cast<int>(l) << std::endl;
	std::cout << "float: " << static_cast<float>(l) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(l) << ".0" << std::endl;
}