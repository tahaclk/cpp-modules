#include "Tools.hpp"

int main(void){
	Base *tmp = generate();
	identify(tmp);
	identify(*tmp);
	delete tmp;
}
