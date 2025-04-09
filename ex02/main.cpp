#include "Base.hpp"

int main(void)
{
	srand(time(NULL));

	size_t	i = 0;
	Base	*ptr = NULL;

	while (i < 10)
	{
		std::cout << i+1 << ". -----------" << std::endl;
		if (ptr != NULL)
		{
			delete ptr;
			ptr = NULL;
		}
		ptr = generate();
		Base &ref = *ptr;
		identify(ptr);
		identify(ref);
		i++;
	}
	if (ptr != NULL)
		delete ptr;
	return (0);
}
