#include "ScalarConverter.hpp"

char	deformeChar(const std::string& str, size_t& len)
{
	if (len == 1 && isascii(str[0]) && !isdigit(str[0]))
		return (str[0]);
	// if (len == 3 && str[0] == '\'' && isascii(str[1]) && !isdigit(str[1]) && str[2] == '\'')
	// if (len == 3 && str[0] == '\'' && isascii(str[1]) && str[2] == '\'')
	// 	return (str[1]);
	return (0);
}

int	isInt(const std::string& str)
{
	int	i = 0;
	long	num;

	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	num = std::atol(str.c_str());
	if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
		return (2);
	return (1);
}

bool	isFloat(const std::string& str, size_t& keyTen)
{
	size_t	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (i < keyTen)
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	i++;
	while (str[i] && str[i] != 'f')
	{
		if (!isdigit(str[i]))
			return (false);
		i++;
	}
	if (str[i] == 'f' && !str[i + 1])
		return (true);
	return (false);
}
