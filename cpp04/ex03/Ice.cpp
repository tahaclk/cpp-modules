#include "Ice.hpp"

Ice::Ice():type("ice"){
	std::cout << this->type << " constructed" << std::endl;
}

Ice::Ice(const Ice &copy):type(copy.getType()){
	std::cout << this->type << " constructed from copy\n";
}

Ice::~Ice(){
	std::cout << this->type << " destroyed\n";
}

Ice & Ice::operator=(const Ice &arg){
	std::cout << "Assigned from " << arg.getType() << std::endl;
	return *this;
}

std::string const & Ice::getType( void ) const
{
	return (this->type);
}

Ice *Ice::clone() const {
	Ice *ret = new Ice;
	return ret;
}

void Ice::use(ICharacter &target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
