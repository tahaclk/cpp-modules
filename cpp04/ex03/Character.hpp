#pragma once
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria			*(inventory[4]);
		std::string const	name;
	public:
		Character(std::string name);
		Character(Character const & copy);
		~Character();
		Character & operator=(Character const & arg);
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		AMateria	*getMateriaFromInventory(int idx);
};
