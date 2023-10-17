#include "PhoneBook.hpp"

int is_allow(std::string text)
{
    if (text == "")
        return (0);
    if (text[0] != '-' && !isnumber(text[0]))
        return (0);
    for(size_t i = 1; i < text.length(); i++)
    {
        if (isnumber(text[i]))
            ;
        else
            return (0);
    }
    return (1);
}

void    searchPerson(int *perCount, PhoneBook *pb)
{
    std::string text = "";
    int         idx = 0;

    if (pb->getSize() <= 0){
        std::cout << "Phonebook is empty!" << std::endl;
        return ;
    }

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     index|      name|   surname|  nickname|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
    (*pb).printRows(perCount);
    std::cout << "|___________________________________________|" << std::endl;
    std::cout << "Select a index:";
    if (text == "" && !std::cin.eof())
    {
        while (std::getline(std::cin, text) && text == "")
        {
            std::cout << "Please insert something!!" << std::endl << "Write name:";
        }
    }
    if (is_allow(text))
    {
        if (text.length() <= 1)
        {
            idx = std::stoi(text);
            if (idx > 7 || idx < 0)
            {
                std::cout << "Number is out of range!" << std::endl;
                return ;
            }
        }
        else
        {
                std::cout << "Number is out of range!" << std::endl;
                return ;
        }
        if (idx < pb->getSize())
            pb->printPerson(idx);
        else
            std::cout << "404 User not found" << std::endl;
    }
    else
    {
        std::cout << "This text is not a number!" << std::endl;
    }
}

int main()
{
    PhoneBook pb;
    std::string input;
    int perCount = 0;

    while (1)
    {
        std::cout << "Insert a command (ADD, SEARCH, EXIT):"<< std::endl;
        std::getline(std::cin, input);
        if (!input.compare("ADD") && !std::cin.eof())
            pb.addPerson(&perCount);
        else if (!input.compare("SEARCH") && !std::cin.eof())
            searchPerson(&perCount, &pb);
        else if (!input.compare("EXIT") && !std::cin.eof())
            break;
        if (std::cin.eof())
        {
            std::cout << std::endl;
            break;
        }
    }
}
