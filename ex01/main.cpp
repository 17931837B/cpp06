#include "Serializer.hpp"

int	main()
{
	Data	data;
	data.n = 42;
	data.c = 'A';
	data.f = 42.1956f;

	Data*		originalPtr = &data;
	uintptr_t	serializedPtr = Serializer::serialize(originalPtr);
	Data*		deserializedPtr = Serializer::deserialize(serializedPtr);

	if (originalPtr == deserializedPtr)
	{
		std::cout << "Serialization and deserialization were successful!" << std::endl;
		std::cout << "Address of original pointer:	" << originalPtr << std::endl;
		std::cout << "Address of serialized pointer:	" << deserializedPtr << std::endl;
		std::cout << "Deserialized data" << std::endl;
		std::cout << "(int) = " << deserializedPtr->n << "\n(char) = '" << deserializedPtr->c << "'\n(float) = " << deserializedPtr->f << std::endl;
	}
	else
		std::cout << "Serialization and deserialization failed." << std::endl;
	return (0);
}