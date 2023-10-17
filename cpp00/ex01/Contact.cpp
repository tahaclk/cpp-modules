#include "Contact.hpp"

int Contact::getIndex(){
    return this->index;
}

std::string Contact::getName(){
    return this->name;
}

std::string Contact::getSurname(){
    return this->surname;
}

std::string Contact::getNickname(){
    return this->nickname;
}

std::string Contact::getNumber(){
    return this->number;
}

std::string Contact::getSecret(){
    return this->darkSecret;
}

void    Contact::setIndex(int index){
    this->index = index;
}

void    Contact::setName(std::string name){
    this->name = name;
}

void    Contact::setSurname(std::string surname){
    this->surname = surname;
}

void    Contact::setNickname(std::string nickname){
    this->nickname = nickname;
}

void    Contact::setNumber(std::string number){
    this->number = number;
}

void    Contact::setSecret(std::string secret){
    this->darkSecret = secret;
}
