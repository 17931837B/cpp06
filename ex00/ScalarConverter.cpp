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
