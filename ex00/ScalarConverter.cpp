#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter(void) 
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	*this = copy;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src) 
{
	// if (this != &src)
	// {
	// 	// this->name_ = src.name_;
	// 	this->grade_ = src.grade_;
	// }
	(void)src;
	return (*this);
}

void	ScalarConverter::convert(const std::string& str)
{
	// std::string	str_;
	char		char_;
	size_t		len = str.length();

	char_ = isChar(str, len);
	std::cout << char_ << std::endl;
}