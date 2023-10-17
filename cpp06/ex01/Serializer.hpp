#pragma once
#include <iostream>

struct Data
{
	std::string	name;
	std::string	surname;
	int			age;
};

class Serializer{
	public:
		Serializer();
		Serializer(const Serializer& copy);
		Serializer& operator=(const Serializer& value);
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
};
