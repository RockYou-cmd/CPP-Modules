#include "Serialization.h"

uintptr_t serialize(Data* data)
{
	return reinterpret_cast<uintptr_t>(data);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data *data = new Data;
	uintptr_t ser;
	data->name = "alae";
	data->age = 99;
	data->gender = "male";
	ser = serialize(data);
	std::cout << "serialized data: " << ser << std::endl;
	data->name = "nada";
	data = deserialize(ser);
	std::cout << data->name << std::endl;
}
