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
	long	num = std::atol(str.c_str());

	std::cout << "char: ";
	if (num < 0 || num > 127)
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (flagInt == 2)
		std::cout << "impossible" << std::endl;
	else
		std::cout	<< static_cast<int>(num) << std::endl;
	std::cout << "float: " << static_cast<float>(num) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
}

void	outputFloat(const std::string& str)
{
	float	num = std::atof(str.c_str());
	const long	gosa = 0.0000000000001;

	std::cout << "char: ";
	if (num < 0 || num > 127)
		std::cout << "impossible" << std::endl;
	else if (isprint(num))
		std::cout << "'" << static_cast<char>(num) << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: ";
	if (static_cast<int>(num) < std::numeric_limits<int>::min() || static_cast<int>(num) > std::numeric_limits<int>::max())
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(num) << std::endl;
	std::cout << "float: ";
	if (num < std::numeric_limits<float>::min() || num > std::numeric_limits<float>::max())
		std::cout << "impossible" << std::endl;
	else if (std::fabs(num - static_cast<int>(num)) < gosa)
		std::cout << num << ".0f" << std::endl;
	else
		std::cout << num << 'f' << std::endl;
	if (std::fabs(num - static_cast<int>(num)) < gosa)
		std::cout << "double: " << static_cast<double>(num) << ".0" << std::endl;
	else
		std::cout << "double: " << static_cast<double>(num) << std::endl;
}