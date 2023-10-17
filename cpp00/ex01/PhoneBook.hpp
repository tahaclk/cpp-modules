#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class PhoneBook{
    private:
        Contact list[8];
        int     size;
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    addPerson(int *perCount);
        void    printRows(int *perCount);
        void    printPerson(int idx);
        int     getSize();
        void    setSize(int size);
};
#endif
