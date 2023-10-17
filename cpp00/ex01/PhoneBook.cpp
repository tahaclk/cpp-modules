#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->size = 0;
	std::cout << "Welcome to tcelik phonebook" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Good bye!" << std::endl;
}

void    PhoneBook::addPerson(int *perCount)
{
    std::string text;

    this->list[*perCount % 8].setIndex((*perCount) % 8);
    if (text == "" && !std::cin.eof())
    {
        std::cout<< "Write name:" << std::endl;
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!" << std::endl << "Write name:";
        }
    }
    this->list[*perCount % 8].setName(text);

    text = "";
    if (text == "" && !std::cin.eof())
    {
        std::cout<< "Write surname:" << std::endl;
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!" << std::endl << "Write surname:";
        }
    }
    this->list[*perCount % 8].setSurname(text);

    text = "";
    if (text == "" && !std::cin.eof())
    {
        std::cout<< "Write nickname:" << std::endl;
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!" << std::endl << "Write nickname:";
        }
    }
    this->list[*perCount % 8].setNickname(text);

    text = "";
    if (text == "" && !std::cin.eof())
    {
        std::cout<< "Write phone number:" << std::endl;
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!" << std::endl << "Write phone number:";
        }
    }
    this->list[*perCount % 8].setNumber(text);

    text = "";
    if (text == "" && !std::cin.eof())
    {
        std::cout<< "Write dark secret:" << std::endl;
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!";
        }
    }
    this->list[*perCount % 8].setSecret(text);

    if (getSize() <= 8){
        setSize(getSize() + 1);
    }
    (*perCount)++;
}

void    PhoneBook::printRows(int *perCount)
{
    int i = -1;
    int listSize = 0;

    if (*perCount > 8)
        listSize = 8;
    else
        listSize = *perCount;
    while (++i < listSize)
    {
        std::cout << "|         ";
        std::cout << i;

        std::cout << "|";
        for (int j = 0; j < 10 - (int) this->list[i].getName().length(); j++)
            std::cout << " ";
        if (10 - (int) this->list[i].getName().length() >= 0)
            std::cout << this->list[i].getName();
        else
        {
            for(int j = 0; j < 9; j++)
                std::cout <<(char) this->list[i].getName()[j];
            std::cout << ".";
        }

        std::cout << "|";
        for (int j = 0; j < 10 - (int) this->list[i].getSurname().length(); j++)
            std::cout << " ";
        if (10 - (int) this->list[i].getSurname().length() >= 0)
            std::cout << this->list[i].getSurname();
        else
        {
            for(int k = 0; k < 9; k++)
                std::cout <<(char) this->list[i].getSurname()[k];
            std::cout << ".";
        }

        std::cout << "|";
        for (int j = 0; j < 10 - (int) this->list[i].getNickname().length(); j++)
            std::cout << " ";
        if (10 - (int) this->list[i].getNickname().length() >= 0)
            std::cout << this->list[i].getNickname();
        else
        {
            for(int j = 0; j < 9; j++)
                std::cout <<(char) this->list[i].getNickname()[j];
            std::cout << ".";
        }
        std::cout << "|" << std::endl;
    }
}

void    PhoneBook::printPerson(int idx)
{
    std::cout << "User index      : " << this->list[idx].getIndex() << std::endl;
    std::cout << "User name       : " << this->list[idx].getName() << std::endl;
    std::cout << "User surname    : " << this->list[idx].getSurname() << std::endl;
    std::cout << "User nickname   : " << this->list[idx].getNickname() << std::endl;
    std::cout << "User number     : " << this->list[idx].getNumber() << std::endl;
    std::cout << "User dark secret: " << this->list[idx].getSecret() << std::endl;
}

void    PhoneBook::setSize(int size){
    this->size = size;
}

int     PhoneBook::getSize(){
    return this->size;
}
