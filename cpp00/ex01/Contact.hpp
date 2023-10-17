#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>

class Contact{
    private:
        int         index;
        std::string name;
        std::string surname;
        std::string nickname;
        std::string number;
        std::string darkSecret;
    public:
        int         getIndex();
        std::string getName();
        std::string getSurname();
        std::string getNickname();
        std::string getNumber();
        std::string getSecret();
        void    setIndex(int index);
        void    setName(std::string name);
        void    setSurname(std::string surname);
        void    setNickname(std::string nickname);
        void    setNumber(std::string number);
        void    setSecret(std::string secret);
};

#endif
