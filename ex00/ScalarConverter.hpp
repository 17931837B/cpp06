#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <iomanip>
# include <exception>
# include <cstdlib>
# include <limits>
# include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter	&operator=(const ScalarConverter &src);
	public:
		static void	convert(const std::string& str);
};

char	deformeChar(const std::string& str, size_t& len);
void	outputChar(char char_);
int		isInt(const std::string& string);
void	outputInt(const std::string& str, int& flagInt);
bool	isFloat(const std::string& str, size_t& keyTen);
void	outputFloat(const std::string& str);

#endif