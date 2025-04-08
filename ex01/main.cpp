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
		std::cout << "シリアライズとデシリアライズは成功しました！" << std::endl;
		std::cout << "元のポインタのアドレス: " << originalPtr << std::endl;
		std::cout << "デシリアライズされたポインタのアドレス: " << deserializedPtr << std::endl;
		std::cout << "デシリアライズされたデータ: n = " << deserializedPtr->n << ", c = '" << deserializedPtr->c << "', f = " << deserializedPtr->f << std::endl;
	}
	else
		std::cout << "シリアライズとデシリアライズは失敗しました。" << std::endl;
	return (0);
}