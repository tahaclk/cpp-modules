#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		const std::string type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria & copy);
		virtual ~AMateria();
		virtual std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};
