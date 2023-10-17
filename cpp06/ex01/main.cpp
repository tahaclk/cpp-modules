#include "Serializer.hpp"

int main(void){
	Data *data = new Data;
	data->name = "Taha";
	data->surname = "Celik";
	data->age = 22;
	std::cout << "Data address::" << data << std::endl;
	std::cout << "Values      ::" << data->name << " " << data->surname << " age:" << data->age << std::endl;
	uintptr_t tmp = Serializer::serialize(data);
	Data *s = Serializer::deserialize(tmp);
	if (data == s)
		std::cout << "Mission successfully!" << std::endl;
	std::cout << "s address   ::" << s << std::endl;
	std::cout << "Values      ::" << s->name << " " << s->surname << " age:" << s->age << std::endl;
	delete data;
}
