#pragma once
#include "AMateria.hpp"

class Cure:public AMateria{
	private:
		std::string type;
	public:
		Cure();
		Cure(const Cure &copy);
		~Cure();
		Cure & operator=(const Cure & arg);
		std::string const & getType() const;
		Cure * clone() const;
		void use(ICharacter & target);
};
