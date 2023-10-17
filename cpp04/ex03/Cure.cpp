#include "Cure.hpp"

Cure::Cure():type("cure"){
	std::cout << type << " constructed" << std::endl;
}

Cure::Cure(const Cure & copy):type(copy.getType()){
	std::cout << this->type << " constructed from copy" << std::endl;
}

Cure::~Cure(){
	std::cout << this->type << " destructed" << std::endl;
}

Cure &Cure::operator=(const Cure & arg){
	std::cout << "Assigned from " << arg.getType() << std::endl;
	return *this;
}

std::string const & Cure::getType() const {
	return this->type;
}

Cure *Cure::clone() const {
	Cure *ret = new Cure;
	return ret;
}

void Cure::use(ICharacter & target){
	std::cout << "* heals " << target.getName() << "\'s wounds *" << std::endl;
}
