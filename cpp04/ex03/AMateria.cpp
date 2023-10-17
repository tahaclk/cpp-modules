#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "AMateria - Default constructer called" << std::endl;
}

AMateria::AMateria(std::string const & type): type(type){
	std::cout << "AMateria - Type constructer called" << std::endl;
}

AMateria::AMateria(const AMateria & copy): type(copy.type){
	std::cout << "AMateria - Copy constructer called" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "AMateria - Destructer called" << std::endl;
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target){
	std::cout << "AMateria abstractly used on " << target.getName() << std::endl;
}
