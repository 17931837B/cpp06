#include "Serializer.hpp"

int	main()
{
	Data	src;
	src.n = 42;
	src.c = 'A';
	src.f = 42.1956f;

	Data*		data_be = &src;
	uintptr_t	tmp = Serializer::serialize(data_be);
	Data*		data_af = Serializer::deserialize(tmp);

	if (data_be == data_af)
	{
		std::cout << "Serialization and deserialization were successful!" << std::endl;
		std::cout << "Address of original pointer:	" << data_be << std::endl;
		std::cout << "(int) = " << data_be->n << "\n(char) = '" << data_be->c << "'\n(float) = " << data_be->f << std::endl;
		std::cout << "Address of serialized pointer:	" << data_af << std::endl;
		// std::cout << "(int) = " << data_af->n << "\n(char) = '" << data_af->c << "'\n(float) = " << data_af->f << std::endl;
		std::cout << "(int) = " << data_af->n << "\n(char) = '" << data_af->c << "'\n(float) = " << data_af->f << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed." << std::endl;
	return (0);
}
