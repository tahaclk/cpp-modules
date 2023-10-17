#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
    public:
        Fixed ();
        Fixed (const Fixed &fixed);
        ~Fixed ();
        Fixed & operator = (const Fixed &fixed);
        Fixed operator + (const Fixed &other)const;
        Fixed operator - (const Fixed &other)const;
        Fixed operator * (const Fixed &other)const;
        Fixed operator / (const Fixed &other)const;
        bool operator == (const Fixed &other)const;
        bool operator != (const Fixed &other)const;
        bool operator < (const Fixed &other)const;
        bool operator > (const Fixed &other)const;
        bool operator >= (const Fixed &other)const;
        bool operator <= (const Fixed &other)const;

        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int);

        static Fixed min(Fixed &value1, Fixed &value2);
        static Fixed min(const Fixed &value1, const Fixed &value2);
        static Fixed max(Fixed &value1, Fixed &value2);
        static Fixed max(const Fixed &value1, const Fixed &value2);

        int getRawBits(void) const;
        void setRawBits( int raw );
        Fixed (const int value);
        Fixed (const float value);
        float toFloat(void) const;
        int toInt(void) const;
    private:
        int value;
        static const int fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed );
#endif
