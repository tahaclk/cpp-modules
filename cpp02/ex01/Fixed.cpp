#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}
Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const{
    return this->value;
}

void Fixed::setRawBits( int const raw ){
    this->value = raw;
}

Fixed &Fixed::operator = (const Fixed &fixed){
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->value = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value){
    std::cout << "Int constructor called" << std::endl;
    this->value = value * (1 << fractional_bits);
}

Fixed::Fixed(const float value){
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << fractional_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->getRawBits()) / (1 << fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractional_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed ){
    out << fixed.toFloat();
    return (out);
}
