#pragma once
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & copy);
		~MateriaSource();
		MateriaSource & operator=(MateriaSource const & arg);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);
	private:
		AMateria	*(inventory[4]);
};
