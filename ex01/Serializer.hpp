#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

// #include <cstdint>
#include <stdint.h>
#include <iostream>
# include <stdint.h>
#include <ostream>
#include "Data.hpp"

class Serializer
{
	private:
		Serializer(void);
		~Serializer(void);
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &src);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif