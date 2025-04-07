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
	char	charValue;
	size_t	len = str.length();
	int		flagInt;

	charValue = deformeChar(str, len);
	if (charValue != 0)
		outputChar(charValue);
	flagInt = isInt(str);
	if (flagInt)
		outputInt(str, flagInt);
}