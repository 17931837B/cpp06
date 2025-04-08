#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "---input \"0\"---\n";
		ScalarConverter::convert("0");
		std::cout << "---input \"nan\"---\n";
		ScalarConverter::convert("nan");
		std::cout << "---input \"42.0f\"---\n";
		ScalarConverter::convert("42.0f");
		return (0);
	}
	if (argc > 2)
	{
		std::cout << "Wrong!!\n";
		return (0);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
