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
        int getRawBits(void) const;
        void setRawBits( int const raw );
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
