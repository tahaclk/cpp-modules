#include "Character.hpp"

Character::Character(std::string name):name(name){
	std::cout << "A character created. Name: " << this->name << std::endl;
	for (int i = 0; i < 4; i++){
		this->inventory[i] = 0;
	}
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		if (this->inventory[i])
			delete this->inventory[i];
	std::cout << "Character destroyed. Name: " << this->name << std::endl;
}

std::string const &Character::getName() const {
	return this->name;
}

Character::Character(const Character & copy):name(copy.getName() + "_copy"){
	for (int i = 0; i < 4; i++)
		if (copy.inventory[i])
			this->inventory[i] = (copy.inventory[i])->clone();
	std::cout << "A character named " << name << " was created from copy of " << copy.getName() << std::endl;
}

Character & Character::operator=(const Character & arg){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i])
			delete this->inventory[i];
		if (arg.inventory[i])
			this->inventory[i] = (arg.inventory[i])->clone();
	}
	return *this;
}

void Character::equip(AMateria *m){
	int i = 0;

	if (!m){
		std::cout << this->name << " tried to equip nothing and it did nothing" << std::endl;
		return ;
	}
	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia" << std::endl;
	}
	(this->inventory)[i] = m;
	std::cout << this->name << " equipped materia " << m->getType() << " in slot " << i << std::endl;
}

void Character::unequip(int idx){
	if (idx < 0 || idx >= 4)
		std::cout << this->name << " tried to unequip nothing at slot " << idx << " and it did nothing" << std::endl;
	else if (!(this->inventory)[idx])
		std::cout << this->name << " has nothing equipped at slot " << idx << " so he can't unequip it" << std::endl;
	else{
		AMateria *ptr = (this->inventory)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << std::endl;
		(this->inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter & target){
	std::string name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->inventory)[idx])->use(target);
}

AMateria *Character::getMateriaFromInventory(int idx){
	return (this->inventory)[idx];
}
