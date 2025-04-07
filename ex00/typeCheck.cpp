#include "ScalarConverter.hpp"

char	isChar(const std::string& str, size_t& len)
{
	if (len == 1 && isascii(str[0]))
		return (str[0]);
	if (len == 3 && str[0] == '\'' && isascii(str[1]) && str[2] == '\'')
		return (str[1]);
	return (0);
}