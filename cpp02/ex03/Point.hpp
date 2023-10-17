#ifndef POINT_HPP
# include <iostream>
# include "Fixed.hpp"

class Point{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point( void );
        Point(const float valueX, const float valueY);
        Point(const Point &point);
        Point &operator=(const Point &point);
        Fixed getX(void);
        Fixed getY(void);
        ~Point();
};

std::ostream &operator<<(std::ostream &out, Point &point);
float sign (Point p1, Point p2, Point p3);
bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif
