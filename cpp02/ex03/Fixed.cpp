#include "Fixed.hpp"

Fixed::Fixed(){
    this->value = 0;
}

Fixed::Fixed(const Fixed &fixed){
    *this = fixed;
}
Fixed::~Fixed(){
}

int Fixed::getRawBits(void) const{
    return this->value;
}

void Fixed::setRawBits( int const raw ){
    this->value = raw;
}

Fixed &Fixed::operator = (const Fixed &fixed){
    if (this != &fixed)
        this->value = fixed.getRawBits();
    return *this;
}

Fixed Fixed::operator + (const Fixed &other) const{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator - (const Fixed &other) const{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator * (const Fixed &other) const{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator / (const Fixed &other) const{
    return Fixed(this->toFloat() / other.toFloat());
}

bool Fixed::operator == (const Fixed &other)const {
    if (this->value == other.value)
        return true;
    return false;
}

bool Fixed::operator != (const Fixed &other)const {
    if (this->value != other.value)
        return true;
    return false;
}

bool Fixed::operator < (const Fixed &other)const {
    if (this->value < other.value)
        return true;
    return false;
}

bool Fixed::operator > (const Fixed &other)const {
    if (this->value > other.value)
        return true;
    return false;
}

bool Fixed::operator <= (const Fixed &other)const {
    if (this->value <= other.value)
        return true;
    return false;
}

bool Fixed::operator >= (const Fixed &other)const {
    if (this->value >= other.value)
        return true;
    return false;
}

Fixed& Fixed::operator++() {
    ++value;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(toFloat());
    ++value;
    return temp;
}

Fixed& Fixed::operator--() {
    --value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(toFloat());
    --value;
    return temp;
}


Fixed Fixed::min(Fixed &value1, Fixed &value2){
    if (value1 < value2)
        return Fixed(value1);
    return Fixed(value2);
}

Fixed Fixed::min(const Fixed &value1, const Fixed &value2){
    if (value1 < value2)
        return Fixed(value1);
    return Fixed(value2);
}

Fixed Fixed::max(Fixed &value1, Fixed &value2){
    if (value1 > value2)
        return Fixed(value1);
    return Fixed(value2);
}

Fixed Fixed::max(const Fixed &value1, const Fixed &value2){
    if (value1 > value2)
        return Fixed(value1);
    return Fixed(value2);
}

Fixed::Fixed(const int value){
    this->value = value * 256;
}

Fixed::Fixed(const float value){
    this->value = roundf(value * 256.0f);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(this->getRawBits()) / (1 << fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractional_bits);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed ){
    out << fixed.toFloat();
    return (out);
}
